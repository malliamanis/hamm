#include <stdlib.h>

#include "frontend/lexer.h"

typedef struct lexer {
	const char *src;
} Lexer;

Lexer *lexer_create(const char *src)
{
	Lexer *lexer = malloc(sizeof(Lexer));

	lexer->src = src;
	
	return lexer;
}

Token lexer_next_token(Lexer *lexer)
{

}

void lexer_destroy(Lexer *lexer)
{
	free(lexer);
}
