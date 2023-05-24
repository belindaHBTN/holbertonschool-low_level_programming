#include "monty.h"

/**
 * push - Pushes an element to the top of the stack
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	char *token;
	int num;


	if (!stack)
	{
		fprintf(stderr, "L%d: No stack found\n", line_number);
		exit(EXIT_FAILURE);
	}

	token = strtok(NULL, " \n");
	if (!token)
	{
		fprintf(stderr, "L%d: Usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	integer_check = is_integer(token);
	if (integer_check == -1)
	{
		fprintf(stderr,"L%d: push integer\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		num = atoi(token);
		new_node = malloc(sizeof(stack_t));
		if (new_node == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		new_node->n = num;
		new_node->prev = NULL;
		if (*stack)
		{
			new_node->next = *stack;
			(*stack)->prev = new_node;
		}
		*stack = new_node;
	}
}

/**
 * is_integer - Checks if the input is an integer
 * @str: a string to check
 *
 * Return: 0 on integer, otherwise -1
 */
int is_integer(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (isdigit(str[i]) == 0)
		{
			return (-1);
		}
		i++;
	}

	return (0);
}
