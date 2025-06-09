#include <map>
#include <regex>

#include "tokens.hpp"

typedef struct LexerError {
    std::string src;
    tokens::Position pos;
} LexerError;

class Lexer {
    public:
    Lexer(std::string text): regexes {}, text {text} {
        // todo: initialize regex map with tokens and their regexes
    }

    void set_text(std::string text);
    std::optional<tokens::Token> next_token();

    private:
    std::string text;
    tokens::Position pos;
    size_t charidx;
    std::map<tokens::TokenType, std::regex> regexes;

    void strip_whitespace();
};