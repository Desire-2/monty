#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - The doubly linked list representation of a stack (or queue)
 * @n: The integer
 * @prev: pointer to the previous element of the stack (or queue)
 * @next: pointer to the next element of the stack (or queue)
 *
 * Description: The doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - The variables -args, file, line content
 * @arg: Value
 * @file: Pointer to monty file
 * @content: Line content
 * @lifi: Flag change stack <-> queue
 * Description: Carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - Opcode and its function
 * @opcode: The opcode
 * @f: Function to handle the opcode
 *
 * Description: Opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *_clean_line(char *content);



void _funcMod(stack_t **head, unsigned int counter);
void _funcPchar(stack_t **head, unsigned int counter);
void _funcPstr(stack_t **head, unsigned int counter);
void _funcRotl(stack_t **head, unsigned int counter);

int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void _free_stack(stack_t *head);
void _funcPop(stack_t **head, unsigned int counter);
void _funcSwap(stack_t **head, unsigned int counter);
void _funcAdd(stack_t **head, unsigned int counter);
void _funcNop(stack_t **head, unsigned int counter);
void _funcSub(stack_t **head, unsigned int counter);
void _funcDiv(stack_t **head, unsigned int counter);
void _funcMul(stack_t **head, unsigned int counter);


void _funcRotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void _addNode(stack_t **head, int n);
void _addQueue(stack_t **head, int n);
void _funcQueue(stack_t **head, unsigned int counter);
void _funcStack(stack_t **head, unsigned int counter);
/*0 - 2*/
void _funcPush(stack_t **head, unsigned int number);
void _funcPall(stack_t **head, unsigned int number);
void _funcPint(stack_t **head, unsigned int number);
#endif
