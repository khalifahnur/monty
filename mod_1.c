#include "monty_props.h"
/**
 * func_mod - computes division of the second top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
*/
void func_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
