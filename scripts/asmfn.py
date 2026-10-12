#!/usr/bin/env python3
# Print the otool disassembly of the function whose demangled name contains the given substring.
import subprocess, sys, re, bisect
binpath, asmpath = sys.argv[1], sys.argv[2]
subs = sys.argv[3:]
nm = subprocess.run(["nm", "-n", binpath], capture_output=True, text=True).stdout.splitlines()
syms = []
for line in nm:
    parts = line.split()
    if len(parts) == 3 and parts[1] in ("t", "T"):
        syms.append((int(parts[0], 16), parts[2]))
addrs = [a for a, _ in syms]
names = [n for _, n in syms]
dem = subprocess.run(["xcrun", "swift-demangle"], input="\n".join(names), capture_output=True, text=True).stdout.splitlines()
asm = {}
for line in open(asmpath):
    m = re.match(r"^([0-9a-f]{16})\t(.*)$", line.rstrip("\n"))
    if m: asm[int(m.group(1), 16)] = m.group(2)
asm_addrs = sorted(asm)
for sub in subs:
    for i, d in enumerate(dem):
        if sub in d:
            start = addrs[i]
            end = addrs[i + 1] if i + 1 < len(addrs) else start + 0x2000
            print(f"######## {d}  @ {start:x}-{end:x}")
            lo = bisect.bisect_left(asm_addrs, start)
            for a in asm_addrs[lo:]:
                if a >= end: break
                print(f"{a:x}\t{asm[a]}")
            break
    else:
        print(f"######## {sub}: not found")
