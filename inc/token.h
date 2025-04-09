#ifndef TOKEN_H
#define TOKEN_H

enum TokenType;

struct Token {
    void *data;
    TokenType token;
}

enum TokenType {
    Keyword;
    IntegerLiteral
};

#endif
