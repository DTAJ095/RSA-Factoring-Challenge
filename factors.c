#include "factors.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: list of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	FILE *f_ptr;
	size_t count;
	ssize_t line;
	char *buff = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	f_ptr = fopen(argv[1], "r");
	if (f_ptr == NULL)
	{
		fprintf(stderr, "Error: can't open the file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line = getline(&buff, &count, f_ptr);
	while (line != -1)
	{
		factorize(buff);
	}

	return (0);
}
