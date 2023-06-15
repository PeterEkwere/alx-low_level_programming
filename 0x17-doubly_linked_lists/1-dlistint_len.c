#include "lists.h"
/**
 * dlistint_len - this is a function that returns number
 * Of elements in a doubly linked list
 *
 * @h: this is a pointer to the first node
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	} return (count);
}
