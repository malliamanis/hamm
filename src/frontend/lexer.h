#ifndef LEXER_H
#define LEXER_H

typedef struct lexer Lexer;

typedef enum {
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
