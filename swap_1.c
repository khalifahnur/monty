#include "monty.h"
/**
 * func_swap - Adds the top two elements of the stack.
 * @counter: counter
 * @head: stack head
 * Return: return null(0)
*/
void func_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int i = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		i++;
	}
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
