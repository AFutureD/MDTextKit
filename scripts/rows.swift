// Prints the vertical runs of "ink" rows in an image (text lines), with their top/bottom and darkest column span.
import AppKit
let args = CommandLine.arguments
guard args.count >= 2, let img = NSImage(contentsOfFile: args[1]), let tiff = img.tiffRepresentation, let rep = NSBitmapImageRep(data: tiff) else { print("usage: rows <image> [threshold]"); exit(1) }
let threshold = args.count > 2 ? Double(args[2]) ?? 0.6 : 0.6
let x0 = args.count > 3 ? Int(args[3]) ?? 0 : 0
let x1 = args.count > 4 ? Int(args[4]) ?? Int.max : Int.max
let w = rep.pixelsWide, h = rep.pixelsHigh
var rowInk = [Int](repeating: 0, count: h)
var rowMinX = [Int](repeating: Int.max, count: h)
for y in 0..<h {
    for x in max(0, x0)..<min(w, x1) {
        guard let c = rep.colorAt(x: x, y: y) else { continue }
        let lum = 0.299 * c.redComponent + 0.587 * c.greenComponent + 0.114 * c.blueComponent
        if lum < threshold { rowInk[y] += 1; rowMinX[y] = min(rowMinX[y], x) }
    }
}
var y = 0
print("size \(w)x\(h)")
while y < h {
    if rowInk[y] > 0 {
        let start = y
        var minX = Int.max
        var ink = 0
        while y < h, rowInk[y] > 0 { minX = min(minX, rowMinX[y]); ink += rowInk[y]; y += 1 }
        print("run top=\(start) bottom=\(y - 1) height=\(y - start) minX=\(minX) ink=\(ink)")
    } else { y += 1 }
}
