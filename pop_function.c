#include "monty.h"
/**
 * _funcPop - Function that prints the top
 * @head: Head stack
 * @counter: number of line
 * Return: Nothing
*/
void _funcPop(stack_t **head, unsigned int counter)
{
	stack_t *_head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	*head = _head->next;
	free(_head);
}
