// Prints horizontal runs of "ink" columns within a row band: cols <image> <threshold> <y0> <y1>
import AppKit
let args = CommandLine.arguments
guard args.count >= 5, let img = NSImage(contentsOfFile: args[1]), let tiff = img.tiffRepresentation, let rep = NSBitmapImageRep(data: tiff),
      let threshold = Double(args[2]), let y0 = Int(args[3]), let y1 = Int(args[4]) else { print("usage: cols <image> <threshold> <y0> <y1>"); exit(1) }
let w = rep.pixelsWide, h = rep.pixelsHigh
var colInk = [Int](repeating: 0, count: w)
for y in max(0, y0)..<min(h, y1) {
    for x in 0..<w {
        guard let c = rep.colorAt(x: x, y: y) else { continue }
        let lum = 0.299 * c.redComponent + 0.587 * c.greenComponent + 0.114 * c.blueComponent
        if lum < threshold { colInk[x] += 1 }
    }
}
var x = 0
print("size \(w)x\(h)")
while x < w {
    if colInk[x] > 0 {
        let s = x
        while x < w, colInk[x] > 0 { x += 1 }
        print("run left=\(s) right=\(x - 1) width=\(x - s)")
    } else { x += 1 }
}
