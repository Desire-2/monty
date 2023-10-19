#include "monty.h"
/**
 * _funcPall - Function that prints the stack
 * @head: Head stack
 * @counter: .........
 * Return: Nothing
*/
void _funcPall(stack_t **head, unsigned int counter)
{
	stack_t *_head;
	(void)counter;

	_head = *head;
	if (_head == NULL)
		return;
	while (_head)
	{
		printf("%d\n", _head->n);
		_head = _head->next;
	}
}
