#include "lists.h"
/**
 * get_dnodeint_at_index - is a function that retrives
 *		node at a particular index in the list
 * @head: is a pointer to the first node
 * @index: is the nth node to be retrived
 * Return: node at index position or return 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		while (temp != NULL)
		{
			if (count == index)
			{
				return (temp);
			}
			temp = temp->next;
			count++;
		}
	} return (NULL);
}
