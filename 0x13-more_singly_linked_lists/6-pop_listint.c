#include "lists.h"
/**
 * pop_listint - is a function that deletes
 * a node from a linked list
 * @head: is a pointer to a pointer to the first node
 * Return: the head of the list
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}


	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
