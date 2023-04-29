#include "lists.h"
/**
 * print_listint - is a function that prints
 * every item in a linked list
 * @h: is a pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	int count = 0;


	while (h != NULL)
	{
		i = h->n;

		printf("%i\n", i);
		count++;

		h = h->next;
	}
	return (count);
}
