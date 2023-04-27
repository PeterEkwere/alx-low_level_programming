#include "lists.h"
/**
 * print_list - is a function that prints all the elements of a list
 * @h: is the first node
 * Return: the amount of all the elements of a list
 */
size_t print_list(const list_t *h)
{
	unsigned int len = 0;
	char *s;
	size_t count = 0;


	while (h != NULL)
	{
		len = h->len;
		s = h->str;

		if (s == NULL)
		{
			s = "(nil)";
			len = 0;
		}

		printf("[%u] %s\n", len, s);
		count++;

		h = h->next;
	}
	return (count);

}
