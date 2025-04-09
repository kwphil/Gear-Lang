#ifndef TOKEN_H
#define TOKEN_H

enum TokenType {
    IntegerLiteral;
    FloatLiteral;
    Identifier;
    Unknown;
};

struct Token {
    void* data;
    TokenType type;
};

#endif
