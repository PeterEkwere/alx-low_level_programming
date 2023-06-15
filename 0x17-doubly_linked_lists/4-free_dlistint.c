#include "lists.h"
/**
 * free_dlistint - is a function that free the list
 * @head: is a pointer to the head of the list
 * Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *current;

	while (temp != NULL)
	{
		current = temp;
		temp = temp->next;
		free(current);
	} free(temp);
}
