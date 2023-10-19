#include "monty.h"
/**
* _free_stack - Function that frees a doubly linked list
* @head: head of the stack
*/
void _free_stack(stack_t *head)
{
	stack_t *_aux;

	_aux = head;
	while (head)
	{
		_aux = head->next;
		free(head);
		head = _aux;
	}
}
