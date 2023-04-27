#include "lists.h"
/**
 * list_len - is a function that  prints
 * The amount of elements in a list
 * @h: is a placeholder for the head of the linked list
 * Return: the amount of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;

		h = h->next;
	}
	return (count);
}
