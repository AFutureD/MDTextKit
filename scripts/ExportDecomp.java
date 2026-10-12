// Ghidra headless post-script: decompile every function and write one file per
// ObjC class (or C++ namespace) under the output directory.
// Usage: analyzeHeadless <proj> <name> -import <bin> -postScript ExportDecomp.java <outdir> [prefix]
// @category Export

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ExportDecomp extends GhidraScript {

    private static final Pattern OBJC = Pattern.compile("^[-+]\\[([A-Za-z_][A-Za-z0-9_]*)(?:\\([A-Za-z0-9_]+\\))? (.*)\\]$");

    private String bucketFor(String name) {
        Matcher m = OBJC.matcher(name);
        if (m.matches()) return m.group(1);
        if (name.contains("::")) {
            String ns = name.split("::")[0];
            int lt = ns.indexOf('<');
            if (lt >= 0) ns = ns.substring(0, lt);
            ns = ns.replace(' ', '_');
            return ns.isEmpty() ? "_cxx" : ns;
        }
        return "_misc";
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outdir = args.length > 0 ? args[0] : "/tmp/decomp";
        String onlyPrefix = args.length > 1 ? args[1] : null;
        File dir = new File(outdir);
        if (!dir.isDirectory()) dir.mkdirs();

        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(false);
        decomp.setSimplificationStyle("decompile");
        boolean opened = decomp.openProgram(currentProgram);
        println("ExportDecomp: openProgram=" + opened + " lastMessage=" + decomp.getLastMessage());

        Map<String, FileWriter> files = new HashMap<>();
        FunctionManager fm = currentProgram.getFunctionManager();
        int total = fm.getFunctionCount();
        int done = 0, failed = 0, written = 0;
        for (Function f : fm.getFunctions(true)) {
            done++;
            String name = f.getName(true); // namespace-qualified, e.g. MDTextStorage::processEditing
            if (f.isThunk() || f.isExternal()) continue;
            String ns = f.getParentNamespace() == null ? "" : f.getParentNamespace().getName(true);
            String bucket;
            if (ns.isEmpty() || ns.equals("Global")) bucket = bucketFor(f.getName());
            else bucket = ns.split("::")[0];
            if (onlyPrefix != null && !bucket.startsWith(onlyPrefix) && !name.startsWith(onlyPrefix)) continue;
            bucket = bucket.replaceAll("[^A-Za-z0-9_.-]", "_");
            String path = new File(dir, bucket + ".c").getPath();
            FileWriter fh = files.get(path);
            if (fh == null) {
                fh = new FileWriter(path);
                files.put(path, fh);
            }
            try {
                DecompileResults res = decomp.decompileFunction(f, 120, monitor);
                if (res != null && res.decompileCompleted()) {
                    fh.write("// ===== " + name + " @ " + f.getEntryPoint() + " =====\n");
                    fh.write(res.getDecompiledFunction().getC());
                    fh.write("\n");
                    written++;
                } else {
                    failed++;
                    fh.write("// ===== " + name + " @ " + f.getEntryPoint() + " : DECOMPILE FAILED: "
                            + (res != null ? res.getErrorMessage() : "nil") + " | " + decomp.getLastMessage() + " =====\n\n");
                    if (failed == 1) println("ExportDecomp: first failure: " + (res != null ? res.getErrorMessage() : "nil") + " | " + decomp.getLastMessage());
                }
            } catch (Exception e) {
                failed++;
                fh.write("// ===== " + name + " @ " + f.getEntryPoint() + " : EXCEPTION " + e + " =====\n\n");
            }
            if (done % 200 == 0) println("ExportDecomp: " + done + "/" + total);
        }
        for (FileWriter fh : files.values()) {
            try { fh.close(); } catch (IOException ignored) {}
        }
        decomp.dispose();
        println("ExportDecomp: finished " + done + " functions, " + written + " written, " + failed + " failed, "
                + files.size() + " files in " + outdir);
    }
}
