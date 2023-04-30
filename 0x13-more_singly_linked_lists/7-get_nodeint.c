#include "lists.h"
/**
 * get_nodeint_at_index - is a function that gets the node at index
 * @head: is a pointer to the first node
 * @index: is the numbering for the position of node to be returned
 * Return: the node at index position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp->next != NULL)
	{
		if (count == index)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (head);
}
