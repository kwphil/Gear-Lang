# Token Matching

Tokens are created throught the `Token` class

```cpp
struct Token {
    void *data;
    TokenType type;
};
```

Here are the types of the TokenType:

```cpp
Keyword
Identifier
IntegerLiteral
FloatLiteral
Operator
```


The `void *` type is to ensure compatibility with C


