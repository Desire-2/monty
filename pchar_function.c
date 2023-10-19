#include "monty.h"
/**
 * _funcPchar - prints the char at the top of the stack,
 *followed by a new line
 * @head: Head stack
 * @counter: Number line
 * Return: Nothing
*/
void _funcPchar(stack_t **head, unsigned int counter)
{
	stack_t *_head;

	_head = *head;
	if (!_head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (_head->n > 127 || _head->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", _head->n);
}
