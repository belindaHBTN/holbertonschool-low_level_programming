#include "monty.h"

/**
 * main - Entry point for the Monty Bytecode Interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	char *token = NULL;
	stack_t *stack = NULL;

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub",sub},
		{"div", div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
	};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, fp)) != -1)
	{
		line_number++;
		token = strtok(line, " \n");
		if (!token)
			continue;
		execute_opcode(opcodes, token, &stack, line_number);
	}

	free(line);
	fclose(fp);
	free_stack(stack);
	return (0);
}

/**
 * execute_opcode - Executes the specified opcode
 * @opcodes: Array of available opcodes
 * @opcode: Opcode to execute.
 * @stack: Double pointer to the head node of the stack
 * @line_number: Line number of the opcode in the file
 *
 * Return: nothing
 */
void execute_opcode(instruction_t *opcodes, char *opcode, stack_t **stack, unsigned int line_number)
{
	int i = 0;

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number);
			return;
		}
		i++;
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}

/**
 * free_stack - Frees all nodes in the stack
 * @stack: Head node of the stack
 *
 * Return: nothing
 */
void free_stack(stack_t *stack)
{
	stack_t *tmp;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}
