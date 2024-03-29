#include "monty.h"

/**
 * mod - computes the rest of the division of the second top element
 * @stack: double pointer to the beginning of the stack
 * @line_number: current line number of the Monty bytecodes file
 *
 * Return: nothing
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int mod;

	if (!stack || !(*stack) || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	mod = ((*stack)->next)->n % (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
	(*stack)->n = mod;
}
