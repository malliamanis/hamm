#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include "frontend/lexer.h"

#define LEXEME_SIZE 128 + 1

typedef struct lexer {
	const char *src;
	uint32_t index;

	char *lexeme;
} Lexer;

Lexer *lexer_create(const char *src)
{
	Lexer *l = malloc(sizeof(Lexer));

	l->src = src;
	l->index = 0;

	l->lexeme = malloc(LEXEME_SIZE);

	return l;
}

Token lexer_next_token(Lexer *l)
{
	uint32_t lexeme_index = 0;
	memset(l->lexeme, 0, LEXEME_SIZE);

	return (Token){0};
}

void lexer_destroy(Lexer *l)
{
	free(l->lexeme);
	free(l);
}
