#include "lists.h"
/**
 * insert_dnodeint_at_index - is a function that adds node
 * at indexth position
 * @h: is a double pointer to the first node
 * @n: is an integer
 * @idx: is the index
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	else
	{
		while (idx > 1)
		{
			temp = temp->next;
			idx--;
		} temp2  = temp->next;

		if (temp->next == NULL)
		{
			temp->next = new_node;
			new_node->prev = temp;
		}
		else
		{
			temp->next = new_node;
			new_node->prev = temp;
			temp2->prev = new_node;
			new_node->next = temp2;
		}
	}
	return (new_node);
}
