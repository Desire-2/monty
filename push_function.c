#include "monty.h"
/**
 * _funcPush - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void _funcPush(stack_t **head, unsigned int counter)
{
	int r, w = 0, _flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			w++;
		for (; bus.arg[w] != '\0'; w++)
		{
			if (bus.arg[w] > 57 || bus.arg[w] < 48)
				_flag = 1; }
		if (_flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			_free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		_free_stack(*head);
		exit(EXIT_FAILURE); }
	r = atoi(bus.arg);
	if (bus.lifi == 0)
		_addNode(head, r);
	else
		_addQueue(head, r);
}
