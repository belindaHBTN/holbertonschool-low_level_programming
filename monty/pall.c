#include "monty.h"

/**
 * pall - Prints all the values on the stack.
 * @stack: Double pointer to the head node of the stack.
 * @line_number: Line number of the opcode in the file.
 */
void pall(stack_c **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
