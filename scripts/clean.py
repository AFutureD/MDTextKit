#!/usr/bin/env python3
"""Strip Ghidra boilerplate from exported decompilation so the logic is readable."""
import re, sys, os
DECL = re.compile(r'^\s+(undefined\d*|ID|long|ulong|uint|char|double|float|code|objc_super|unsigned_long_long|unsigned|byte|_NSRange|int|bool|short|ushort|void|cfstringStruct|objc_class)\s*\**\s*[A-Za-z_0-9]+(\s*\[\d*\])?;\s*$')
SKIP = [
    re.compile(r'^\s*/\* WARNING'), re.compile(r'^\s+_objc_(retain|release|store|setProperty|getProperty)_fixup \*/'),
    re.compile(r'^\s*/\* Function Stack Size'), re.compile(r'^\s*\*/\s*$'),
    re.compile(r'^\s*(local|uStack|lStack|puStack|pcStack|IStack|auStack)_[0-9a-f]+ = (0|\(long \*\)0x0|\(undefined8 \*\)0x0|0x[0-9a-f]+|PTR___NSConcreteStackBlock_[0-9a-f]+|&local_[0-9a-f]+|puVar\d+|"");\s*$'),
    re.compile(r'^\s*(local|lStack|puStack|pcStack|IStack)_[0-9a-f]+ = (___Block_byref_object_(copy|dispose)_|&___block_descriptor_.*|&\s*$)'),
    re.compile(r'^\s*___block_descriptor_'), re.compile(r'^\s*;\s*$'),
    re.compile(r'^\s*local_[0-9a-f]+ = \*\(long \*\)PTR____stack_chk_guard'),
    re.compile(r'^\s*if \(\*\(long \*\)PTR____stack_chk_guard'), re.compile(r'^\s*___stack_chk_fail'),
    re.compile(r'^\s*/\* WARNING: Subroutine does not return \*/'),
    re.compile(r'^\s*(u|l)?Stack_[0-9a-f]+ = 0;'),
]
def clean(text):
    out = []
    for line in text.splitlines():
        if DECL.match(line): continue
        if any(p.match(line) for p in SKIP): continue
        if line.strip() == "" and out and out[-1].strip() == "": continue
        line = line.replace("objc_stub::", "").replace("*(undefined8 *)PTR_", "").replace("(ID)&_OBJC_CLASS___", "").replace("&_OBJC_CLASS___", "")
        line = re.sub(r'_0005[0-9a-f]{4}', '', line)
        line = re.sub(r'countByEnumeratingWithState_objects_count_\(([^,]+),[^)]*\)', r'FAST_ENUM(\1)', line)
        out.append(line)
    return "\n".join(out) + "\n"
src, dst = sys.argv[1], sys.argv[2]
os.makedirs(dst, exist_ok=True)
for f in sorted(os.listdir(src)):
    if not f.endswith(".c") or f == "objc_stub.c": continue
    open(os.path.join(dst, f), "w").write(clean(open(os.path.join(src, f)).read()))
print("cleaned", len(os.listdir(dst)), "files")
