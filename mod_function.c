#include "monty.h"
/**
 * _funcMod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _funcMod(stack_t **head, unsigned int counter)
{
	stack_t *_head;
	int _leng = 0, _aux;

	_head = *head;
	while (_head)
	{
		_head = _head->next;
		_leng++;
	}
	if (_leng < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	if (_head->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_aux = _head->next->n % _head->n;
	_head->next->n = _aux;
	*head = _head->next;
	free(_head);
}
