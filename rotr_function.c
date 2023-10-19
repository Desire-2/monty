#include "monty.h"
/**
  *_funcRotr - Function rotates the stack to the bottom
  *@head: Head stack
  *@counter: Number line
  *Return: Nothing
 */
void _funcRotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpy;

	cpy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *head;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*head)->prev = cpy;
	(*head) = cpy;
}
