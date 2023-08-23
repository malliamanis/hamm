#include <stdio.h>
#include <stdlib.h>

#include "hamm.h"
#include "frontend/parser.h"

char *hamm_compile(char *src)
{
	parser_parse(src);

	free(src);

	return NULL;
}
