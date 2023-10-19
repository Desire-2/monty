#include "monty.h"
/**
 * _funcPint - Function prints the top
 * @head: Head stack
 * @counter: Number line
 * Return: Nothing
*/
void _funcPint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
