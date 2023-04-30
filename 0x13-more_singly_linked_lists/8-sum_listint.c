#include "lists.h"
/**
 * sum_listint - is a function that sums all the data(n) in a linked-list
 * @head: is a pointer to the first node
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		i = head->n;
		sum = sum + i;

		head = head->next;
	}
	return (sum);
}
