#include "monty_props.h"
/**
 * func_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: number count
 * Return: no return
*/
void func_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
