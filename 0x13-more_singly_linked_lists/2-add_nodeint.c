#include "lists.h"
/**
 * add_nodeint - is a function that adds a node to the top of a linked list
 * @head: is the head of the linked list
 * @n: is a member of the node
 * Return: the head of the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int i;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	i = n;
	new_node->n = i;
	new_node->next = *head;
	*head = new_node;

	return (*head);

}
