#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hamm.h"

static char *read_file(const char *file_name);
// void static write_file(const char *file_name, const char *src);

int main(int argc, char **argv)
{
	if (argc < 2) {
		printf("error: no file provided\n");

		return 1;
	}

	for (int i = 1; i < argc; ++i) {
		char *assembly = hamm_compile(read_file(argv[i]));

		// write_file
	}

	return 0;
}

static char *read_file(const char *file_name)
{
	FILE *file = fopen(file_name, "r");
	if (file == NULL) {
		fprintf(stderr, "error: %s: cannot open file\n", file_name);
		exit(EXIT_FAILURE);
	}

	fseek(file, 0, SEEK_END);
	size_t file_size = ftell(file);
	fseek(file, 0, SEEK_SET);

	char *buffer = malloc(file_size + 1);
	fread(buffer, sizeof(char), file_size, file);

	fclose(file);

	return buffer;
}

// static void write_file(const char *file_name, const char *src)
// {
// 	FILE *file = fopen(file_name, "w+");
// 	if (file == NULL) {
// 		fprintf(stderr, "error: %s: cannot open file\n", file_name);
// 		exit(EXIT_FAILURE);
// 	}

// 	fwrite(src, sizeof(char), strlen(src), file);
	
// 	fclose(file);
// }
