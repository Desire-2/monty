#include "monty.h"
/**
 * _funcQueue - Function prints the top
 * @head: Head stack
 * @counter: line_number
 * Return: Nothing
*/
void _funcQueue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * _addQueue - Function that add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void _addQueue(stack_t **head, int n)
{
	stack_t *nw_nd, *_aux;

	_aux = *head;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{
		printf("Error\n");
	}
	nw_nd->n = n;
	nw_nd->next = NULL;
	if (_aux)
	{
		while (_aux->next)
			_aux = _aux->next;
	}
	if (!_aux)
	{
		*head = nw_nd;
		nw_nd->prev = NULL;
	}
	else
	{
		_aux->next = nw_nd;
		nw_nd->prev = _aux;
	}
}
