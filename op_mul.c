#include "monty.h"

/**
 * op_mul - multiplies the second top element of the stack with the top element
 * @stack: double pointer to the stack
 * @line_number: current line number
 * Return: void
 */

void op_mul(stack_t **stack, unsigned int line_number)
{
	int mult;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mult = (*stack)->next->n * (*stack)->n;
	op_pop(stack, line_number);
	(*stack)->n = mult;
}
