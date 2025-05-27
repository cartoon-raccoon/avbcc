#include <string>
#include <optional>

enum TokenType {
    // VARIABLE TOKENS
    ident,
    literal,

    // KEYWORDS
    kw_return,
    kw_void,
    // builtin types
    kw_int,
    kw_long,
    kw_char,

    // SYNTACTIC TOKENS
    lparen,
    rparen,
    lbrace,
    rbrace,
    lbrkt,
    rbrkt,
    comma,
    semicolon,
    colon,
    star,
    plus,
    dash,
    slash,
};

struct Token {
    /* The type of the token. */
    TokenType tokentype;
    /* The value of the token, if */
    std::optional<std::string> value;
    std::string srcfile;
    size_t line;
    size_t column;
};