#include "lists.h"
/**
 * listint_len - is a function that prints
 * the number of elements in a linked list
 * @h: is a pointer to the head of the list
 * Return: an integer
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}

	return (count);
}
