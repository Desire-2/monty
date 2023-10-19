#include "monty.h"
/**
 * _funcAdd - Function that adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _funcAdd(stack_t **head, unsigned int counter)
{
	int _leng = 0, _aux;
	stack_t *_head;

	_head = *head;
	while (_head)
	{
		_head = _head->next;
		_leng++;
	}
	if (_leng < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	_aux = _head->n + _head->next->n;
	_head->next->n = _aux;
	*head = _head->next;
	free(_head);
}
