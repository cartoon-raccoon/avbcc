#include <lexer/tokens.hpp>

namespace tokens {

std::string token_regex(enum TokenType tokentype) {
    std::string regex;
    switch (tokentype) {
    case ident: regex = "[a-zA-Z]\\w*\\b";
    case constant: regex = "[0-9]+\\b";
    case kw_return:
    }

    return regex;
}

std::optional<enum TokenType> double_token(enum TokenType tokentype) {
    switch (tokentype) {
    case star: return dbl_star;
    case plus: return dbl_plus;
    case dash: return dbl_dash;
    case slash: return dbl_slash;
    case pipe: return dbl_pipe;
    case ampersand: return dbl_ampersand;
    case equals: return dbl_equals;
    case lcarat: return dbl_lcarat;
    case rcarat: return dbl_rcarat;
    default: return {};
    }
}

}