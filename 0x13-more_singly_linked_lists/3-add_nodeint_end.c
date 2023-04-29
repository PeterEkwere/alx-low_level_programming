#include "lists.h"
/**
 * add_nodeint_end - is a function that adds a node to
 * The end of the linked list
 * @head: is a pointer to the head of the linked list
 * @n: is an integer member of a node in the linked list
 * Return: the head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	int i;
	listint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	i = n;
	new_node->n = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	} return (new_node);
}
