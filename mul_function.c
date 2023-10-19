#include "monty.h"
/**
 * _funcMul - Function multiplies the top two elements of the stack.
 * @head: Head stack
 * @counter: Number line
 * Return: Nothing
*/
void _funcMul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_head = *head;
	_aux = _head->next->n * _head->n;
	_head->next->n = _aux;
	*head = _head->next;
	free(_head);
}
