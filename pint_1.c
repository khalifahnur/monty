#include "monty_props.h"
/**
 * func_pint - prints the top
 * @counter: line number
 * @head: stack head
 * Return: no null
*/
void func_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint,stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
