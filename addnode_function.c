#include "monty.h"
/**
 * _addNode - Function that add node to the head stack
 * @head: Head of the stack
 * @n: New_value
 * Return: Nothing
*/
void _addNode(stack_t **head, int n)
{

	stack_t *nw_nd, *_aux;

	_aux = *head;
	nw_nd = malloc(sizeof(stack_t));
	if (nw_nd == NULL)
	{ printf("Error\n");
		exit(0); }
	if (_aux)
		_aux->prev = nw_nd;
	nw_nd->n = n;
	nw_nd->next = *head;
	nw_nd->prev = NULL;
	*head = nw_nd;
}
