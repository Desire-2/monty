#include "monty.h"
/**
  *_funcSub- Sustration
  *@head: Head stack
  *@counter: Number line
  *Return: Nothing
 */
void _funcSub(stack_t **head, unsigned int counter)
{
	stack_t *_aux;
	int s, nds;

	_aux = *head;
	for (nds = 0; _aux != NULL; nds++)
		_aux = _aux->next;
	if (nds < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	_aux = *head;
	s = _aux->next->n - _aux->n;
	_aux->next->n = s;
	*head = _aux->next;
	free(_aux);
}
