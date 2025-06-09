#include <lexer/lexer.hpp>

using namespace tokens;

void Lexer::set_text(std::string text) {
    this->text = text;
}

std::optional<Token> Lexer::next_token() {
    return {};
}

void Lexer::strip_whitespace() {

}