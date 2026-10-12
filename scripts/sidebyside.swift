import AppKit
let a = CommandLine.arguments
guard a.count >= 4, let l = NSImage(contentsOfFile: a[1]), let r = NSImage(contentsOfFile: a[2]) else { print("usage: sidebyside left right out.png"); exit(1) }
let lr = NSBitmapImageRep(data: l.tiffRepresentation!)!, rr = NSBitmapImageRep(data: r.tiffRepresentation!)!
let w = lr.pixelsWide + rr.pixelsWide + 8, h = max(lr.pixelsHigh, rr.pixelsHigh)
let out = NSBitmapImageRep(bitmapDataPlanes: nil, pixelsWide: w, pixelsHigh: h, bitsPerSample: 8, samplesPerPixel: 4, hasAlpha: true, isPlanar: false, colorSpaceName: .deviceRGB, bytesPerRow: 0, bitsPerPixel: 0)!
NSGraphicsContext.saveGraphicsState()
NSGraphicsContext.current = NSGraphicsContext(bitmapImageRep: out)
NSColor.red.setFill(); NSRect(x: 0, y: 0, width: w, height: h).fill()
lr.draw(in: NSRect(x: 0, y: h - lr.pixelsHigh, width: lr.pixelsWide, height: lr.pixelsHigh))
rr.draw(in: NSRect(x: lr.pixelsWide + 8, y: h - rr.pixelsHigh, width: rr.pixelsWide, height: rr.pixelsHigh))
NSGraphicsContext.restoreGraphicsState()
try! out.representation(using: .png, properties: [:])!.write(to: URL(fileURLWithPath: a[3]))
print("wrote \(a[3]) \(w)x\(h)")
