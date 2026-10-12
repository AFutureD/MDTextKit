#!/bin/zsh
# Rebuilds dist/BearClone.app from a debug SwiftPM build (run from the BearClone package directory).
set -e
swift build
BIN=$(swift build --show-bin-path)
APP=dist/BearClone.app
rm -rf "$APP"
mkdir -p "$APP/Contents/MacOS" "$APP/Contents/Resources"
cp "$BIN/BearCloneApp" "$APP/Contents/MacOS/BearClone"
cp -R "$BIN/BearClone_SFThemeKit.bundle" "$APP/Contents/MacOS/"
cp -R "$BIN/BearClone_SFThemeKit.bundle" "$APP/Contents/Resources/"
cat > "$APP/Contents/Info.plist" <<'PLIST'
<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN" "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
<plist version="1.0"><dict>
<key>CFBundleExecutable</key><string>BearClone</string>
<key>CFBundleIdentifier</key><string>net.bearclone.app</string>
<key>CFBundleName</key><string>BearClone</string>
<key>CFBundlePackageType</key><string>APPL</string>
<key>CFBundleShortVersionString</key><string>0.2</string>
<key>LSMinimumSystemVersion</key><string>13.0</string>
<key>NSHighResolutionCapable</key><true/>
</dict></plist>
PLIST
codesign --force --sign - "$APP" >/dev/null 2>&1 || true
echo "built $APP"
