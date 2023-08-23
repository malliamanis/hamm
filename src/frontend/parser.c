#include <stdlib.h>

#include "frontend/lexer.h"
#include "frontend/parser.h"

typedef struct parser {
	Lexer *lexer;
} Parser;

void parser_parse(const char *src)
{
	Parser *parser = malloc(sizeof(Parser));

	parser->lexer = lexer_create(src);

	lexer_destroy(parser->lexer);
	free(parser);
}