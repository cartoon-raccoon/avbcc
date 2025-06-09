#include <optional>
#include <string>

namespace tokens {

enum TokenType {
    // VARIABLE TOKENS
    ident,
    constant,

    // KEYWORDS
    kw_unsigned,
    kw_signed,
    kw_char,
    kw_short,
    kw_int,
    kw_long,
    kw_float,
    kw_double,
    kw_bool,
    kw_struct,
    kw_enum,
    kw_union,
    kw_static,
    kw_extern,
    kw_typedef,
    kw_void,
    kw_const,

    // control flow
    kw_if,
    kw_else,
    kw_switch,
    kw_case,
    kw_default,
    kw_goto,
    kw_do,
    kw_for,
    kw_while,
    kw_continue,
    kw_return,

    // SYNTACTIC TOKENS
    // doubleable tokens
    star,
    dbl_star,
    plus,
    dbl_plus,
    dash,
    dbl_dash,
    slash,
    dbl_slash,
    pipe,
    dbl_pipe,
    ampersand,
    dbl_ampersand,
    equals,
    dbl_equals,

    // other tokens
    singlequote,
    doublequote,
    lparen,
    rparen,
    lbrace,
    rbrace,
    lbrkt,
    rbrkt,
    lcarat,
    dbl_lcarat,
    dbl_rcarat,
    rcarat,
    comma,
    semicolon,
    colon,
    bang,
};

// Returns the regular expression for a given TokenType.
std::string token_regex(enum TokenType);

// If the given TokenType has a double counterpart, it returns it.
// Otherwise, the TokenType is returned.
std::optional<enum TokenType> double_token(enum TokenType);

struct Position {
    size_t line;
    size_t column;
};

typedef struct Token {
    /* The type of the token. */
    TokenType tokentype;
    /* The value of the token */
    std::string value;
    std::string srcfile;
    struct Position pos;
} Token;

}