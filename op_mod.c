#include "monty.h"

/**
 * op_mod - computes the mod of the second top by the top element
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_mod(stack_t **stack, unsigned int line_number)
{
	int modd;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	modd = (*stack)->next->n % (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->n = modd;
}
