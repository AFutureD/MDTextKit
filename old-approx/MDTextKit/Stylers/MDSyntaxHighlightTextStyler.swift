import AppKit

/// Bear: `SFCHighlighter` (SFCodeHighlighter.framework) runs Prism.js inside a
/// JSContext and maps Prism token types to theme colors. This Swift version is a
/// small regex tokenizer with the same token vocabulary: comment, string,
/// number, keyword, function, constant.
public final class SFCHighlighter {
    public static let shared = SFCHighlighter()

    public struct Token { public let range: NSRange; public let type: String }

    private let keywords: [String: Set<String>] = [
        "swift": ["let", "var", "func", "class", "struct", "enum", "protocol", "extension", "import", "if", "else", "guard", "return",
                  "for", "in", "while", "switch", "case", "default", "break", "continue", "throw", "throws", "try", "catch", "async",
                  "await", "public", "private", "internal", "open", "fileprivate", "static", "override", "init", "deinit", "self",
                  "super", "where", "as", "is", "nil", "true", "false", "some", "any", "mutating", "final", "lazy", "weak", "unowned",
                  "defer", "do", "repeat", "typealias", "associatedtype", "inout", "subscript", "convenience", "required"],
        "javascript": ["const", "let", "var", "function", "return", "if", "else", "for", "while", "do", "switch", "case", "break",
                       "continue", "new", "class", "extends", "import", "export", "from", "default", "async", "await", "try", "catch",
                       "finally", "throw", "this", "typeof", "instanceof", "in", "of", "null", "undefined", "true", "false", "yield",
                       "static", "get", "set", "super", "delete", "void"],
        "python": ["def", "class", "return", "if", "elif", "else", "for", "while", "in", "not", "and", "or", "import", "from", "as",
                   "try", "except", "finally", "raise", "with", "lambda", "yield", "pass", "break", "continue", "None", "True",
                   "False", "is", "global", "nonlocal", "del", "assert", "async", "await", "self"],
        "go": ["func", "package", "import", "var", "const", "type", "struct", "interface", "map", "chan", "go", "defer", "return",
               "if", "else", "for", "range", "switch", "case", "default", "break", "continue", "select", "nil", "true", "false"],
        "rust": ["fn", "let", "mut", "struct", "enum", "impl", "trait", "pub", "use", "mod", "match", "if", "else", "for", "while",
                 "loop", "return", "self", "Self", "where", "async", "await", "move", "ref", "const", "static", "type", "dyn",
                 "crate", "super", "unsafe", "true", "false", "in", "as", "break", "continue"],
        "c": ["int", "char", "void", "float", "double", "long", "short", "unsigned", "signed", "struct", "union", "enum", "typedef",
              "if", "else", "for", "while", "do", "switch", "case", "default", "break", "continue", "return", "static", "const",
              "extern", "sizeof", "include", "define", "NULL", "true", "false", "bool", "class", "public", "private", "protected",
              "virtual", "override", "new", "delete", "this", "namespace", "using", "template", "typename", "auto", "nullptr"],
        "bash": ["if", "then", "else", "elif", "fi", "for", "in", "do", "done", "while", "case", "esac", "function", "return",
                 "export", "local", "echo", "exit", "source"],
        "sql": ["select", "from", "where", "insert", "into", "values", "update", "set", "delete", "create", "table", "drop", "alter",
                "join", "left", "right", "inner", "outer", "on", "group", "by", "order", "limit", "and", "or", "not", "null", "as",
                "distinct", "having", "union", "primary", "key", "index"],
    ]

    public let languageAliases: [String: String] = [
        "js": "javascript", "jsx": "javascript", "ts": "javascript", "typescript": "javascript", "tsx": "javascript",
        "py": "python", "golang": "go", "rs": "rust", "cpp": "c", "c++": "c", "objc": "c", "objective-c": "c", "h": "c",
        "sh": "bash", "shell": "bash", "zsh": "bash", "objectivec": "c", "swift": "swift", "kotlin": "swift", "java": "c",
    ]

    public func normalizeLanguageName(_ name: String) -> String {
        let lower = name.lowercased()
        return languageAliases[lower] ?? lower
    }

    private static let regexCache = NSCache<NSString, NSRegularExpression>()
    private func regex(_ pattern: String) -> NSRegularExpression? {
        if let r = SFCHighlighter.regexCache.object(forKey: pattern as NSString) { return r }
        guard let r = try? NSRegularExpression(pattern: pattern, options: []) else { return nil }
        SFCHighlighter.regexCache.setObject(r, forKey: pattern as NSString)
        return r
    }

    /// Bear: `-[SFCHighlighter highlightedAttributedStringFromCode:language:error:]` returns an attributed
    /// string; we return tokens so the styler can apply theme colors.
    public func tokenize(_ code: String, language: String) -> [Token] {
        let lang = normalizeLanguageName(language)
        let ns = code as NSString
        let whole = NSRange(location: 0, length: ns.length)
        var consumed = [Bool](repeating: false, count: ns.length)
        var tokens: [Token] = []

        func claim(_ pattern: String, type: String) {
            guard let re = regex(pattern) else { return }
            for m in re.matches(in: code, options: [], range: whole) {
                let r = m.range
                guard r.length > 0, !consumed[r.location] else { continue }
                for i in r.location..<NSMaxRange(r) { consumed[i] = true }
                tokens.append(Token(range: r, type: type))
            }
        }

        // comments first, then strings, so nothing inside them is re-tokenized
        switch lang {
        case "python", "bash", "ruby", "yaml", "toml", "r": claim("#[^\\n]*", type: "comment")
        case "sql", "lua": claim("--[^\\n]*", type: "comment")
        case "html", "xml": claim("<!--[\\s\\S]*?-->", type: "comment")
        default:
            claim("/\\*[\\s\\S]*?\\*/", type: "comment")
            claim("//[^\\n]*", type: "comment")
        }
        claim("\"(?:\\\\.|[^\"\\\\\\n])*\"", type: "string")
        claim("'(?:\\\\.|[^'\\\\\\n])*'", type: "string")
        claim("`(?:\\\\.|[^`\\\\])*`", type: "string")
        claim("\\b0[xX][0-9a-fA-F_]+\\b|\\b\\d+(?:\\.\\d+)?(?:[eE][+-]?\\d+)?\\b", type: "number")
        claim("\\b[A-Za-z_][A-Za-z0-9_]*(?=\\s*\\()", type: "function")

        if let words = keywords[lang] {
            if let re = regex("\\b[A-Za-z_][A-Za-z0-9_]*\\b") {
                for m in re.matches(in: code, options: [], range: whole) {
                    let r = m.range
                    guard !consumed[r.location] else { continue }
                    let w = ns.substring(with: r)
                    if words.contains(w) || (lang == "sql" && words.contains(w.lowercased())) {
                        for i in r.location..<NSMaxRange(r) { consumed[i] = true }
                        tokens.append(Token(range: r, type: "keyword"))
                    } else if w.first?.isUppercase == true, lang != "python" {
                        tokens.append(Token(range: r, type: "entity"))
                    }
                }
            }
        }
        // functions claimed before keywords: demote keyword-looking "functions" (e.g. `if (`)
        if let words = keywords[lang] {
            tokens = tokens.map { t in
                if t.type == "function", words.contains(ns.substring(with: t.range)) { return Token(range: t.range, type: "keyword") }
                return t
            }
        }
        return tokens
    }
}

/// Bear: `MDSyntaxHighlightTextStyler` — the only styler with `canStyleAsync == YES`.
/// Prism runs on a background queue in Bear; the regex tokenizer here is cheap
/// enough to stay synchronous, but the hook is kept.
public final class MDSyntaxHighlightTextStyler: MDBaseTextStyler {
    public var highlighter = SFCHighlighter.shared
    public override var canStyleAsync: Bool { true }

    public override func style(_ s: NSMutableAttributedString, range: NSRange) {
        enumerate(.mdSyntaxHighlightLanguage, in: s, range: range) { value, r in
            guard let language = value as? String else { return }
            let full = self.longestRange(of: .mdSyntaxHighlightLanguage, at: r.location, in: s) ?? r
            let code = (s.string as NSString).substring(with: full)
            for token in self.highlighter.tokenize(code, language: language) {
                guard let color = self.context.syntaxColors[token.type] else { continue }
                let abs = NSRange(location: full.location + token.range.location, length: token.range.length)
                s.addAttributes([.foregroundColor: color, .mdSyntaxToken: token.type], range: abs)
            }
        }
    }
}
