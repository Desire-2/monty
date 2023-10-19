#include "monty.h"
/**
* execute - Function that executes the opcode
* @stack: Head linked list - stack
* @counter: Counter line
* @file: Poiner to monty file
* @content: Line content
* Return: Nothing
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", _funcPush}, {"pall", _funcPall}, {"pint", _funcPint},
				{"pop", _funcPop},
				{"swap", _funcSwap},
				{"add", _funcAdd},
				{"nop", _funcNop},
				{"sub", _funcSub},
				{"div", _funcDiv},
				{"mul", _funcMul},
				{"mod", _funcMod},
				{"pchar", _funcPchar},
				{"pstr", _funcPstr},
				{"rotl", _funcRotl},
				{"rotr", _funcRotr},
				{"queue", _funcQueue},
				{"stack", _funcStack},
				{NULL, NULL}
				};
	unsigned int r = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[r].opcode && op)
	{
		if (strcmp(op, opst[r].opcode) == 0)
		{	opst[r].f(stack, counter);
			return (0);
		}
		r++;
	}
	if (op && opst[r].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		_free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
