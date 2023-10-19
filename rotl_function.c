#include "monty.h"
/**
  *_funcRotl- Function that rotates the stack to the top
  *@head: Head stack
  *@counter: Number line
  *Return: Nothing
 */
void _funcRotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *_tmp = *head, *_aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	_aux = (*head)->next;
	_aux->prev = NULL;
	while (_tmp->next != NULL)
	{
		_tmp = _tmp->next;
	}
	_tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = _tmp;
	(*head) = _aux;
}
