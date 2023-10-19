#include "monty.h"
/**
 * _funcPstr - Function that prints the string starting at the top
 * of the stack,followed by a new
 * @head: Head stack
 * @counter: Number line
 * Return: Nothing
*/
void _funcPstr(stack_t **head, unsigned int counter)
{
	stack_t *_head;
	(void)counter;

	_head = *head;
	while (_head)
	{
		if (_head->n > 127 || _head->n <= 0)
		{
			break;
		}
		printf("%c", _head->n);
		_head = _head->next;
	}
	printf("\n");
}
