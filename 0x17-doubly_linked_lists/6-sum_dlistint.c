#include "lists.h"
/**
 * sum_dlistint - is a function that sum all the date in a list
 * @head: is a pointer to the first node
 * Return: the sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	else
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
