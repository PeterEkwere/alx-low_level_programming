#include "lists.h"
/**
 * print_dlistint - this is a function that prints
 * all elements in a linked list
 *
 * @h: is a pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int num = 0;

	while (temp != NULL)
	{
		printf("%i\n", temp->n);
		num++;
		temp = temp->next;
	} return (num);
}
