#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - The monty code interpreter
* @argc: The number of arguments
* @argv: The monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *_cntnt;
	FILE *_file;
	size_t s = 0, _read_line = 1;
	stack_t *_stack = NULL;
	unsigned int cntr = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	_file = fopen(argv[1], "r");
	bus.file = _file;
	if (!_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (_read_line > 0)
	{
		_cntnt = NULL;
		_read_line = getline(&_cntnt, &s, _file);
		bus.content = _cntnt;
		cntr++;
		if (_read_line > 0)
		{
			execute(_cntnt, &_stack, cntr, _file);
		}
		free(_cntnt);
	}
	_free_stack(_stack);
	fclose(_file);
return (0);
}
