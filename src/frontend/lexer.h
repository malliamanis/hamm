#ifndef LEXER_H
#define LEXER_H

typedef struct lexer Lexer;

typedef enum {
	TOKEN_LEFT_PAREN,
	TOKEN_RIGHT_PAREN,
	TOKEN_SEMICOLON,
	TOKEN_INCREMENT,
	TOKEN_DECREMENT,
	TOKEN_PLUS,
	TOKEN_MINUS,
	TOKEN_MULTIPLY,
	TOKEN_DIVIDE,
	TOKEN_PLUS_ASSIGN,
	TOKEN_MINUS_ASSIGN,
	TOKEN_MULTIPLY_ASSIGN,
	TOKEN_DIVIDE_EQUALS,
	TOKEN_ASSIGN,
	TOKEN_EQUALS,
	TOKEN_BANG,
	TOKEN_IF,
	TOKEN_ELSE,
	TOKEN_WHILE,
	TOKEN_I8,
	TOKEN_UI8,
	TOKEN_I16,
	TOKEN_UI16,
	TOKEN_I32,
	TOKEN_UI32,
	TOKEN_I64,
	TOKEN_UI64,
	TOKEN_STRING_LIT,
	TOKEN_INTEGER_LIT,
	TOKEN_IDENTIFIER,
	TOKEN_EOF
} TokenType;

typedef struct {
	TokenType type;
	char *value;
} Token;

Lexer *lexer_create(const char *src);

Token lexer_next_token(Lexer *lexer);

void lexer_destroy(Lexer *lexer);

#endif
