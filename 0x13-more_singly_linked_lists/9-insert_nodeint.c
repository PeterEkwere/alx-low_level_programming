#include "lists.h"
/**
 * insert_nodeint_at_index - is a function that
 * creates a node and adds it to a particular index
 *
 * @head: is a pointer to a pointer to the first node
 * @idx: is the index at which
 * The new node is supposed to be placed
 * @n: is a member to be inserted into the node
 * Return: the pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = n;
	listint_t *temp = *head;
	listint_t *previous_node = *head;
	unsigned int count = 0;
	unsigned int j = 0;

	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (temp != NULL)
		{
			if (count == idx)
			{
				new_node->n = i;
				new_node->next = temp;

				for (j = 0; j < idx - 1; j++)
				{
					previous_node = previous_node->next;
				}
				previous_node->next = new_node;
			}
			count++;
			temp = temp->next;
		} return (new_node);
	}
	return (NULL);
}
