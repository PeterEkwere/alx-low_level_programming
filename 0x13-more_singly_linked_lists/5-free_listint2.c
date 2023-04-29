#include "lists.h"
/**
 * free_listint2 - is a function that frees a list
 * And assign the head with NULL
 * @head: is a pointer the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);
	}
	*head = NULL;
}
