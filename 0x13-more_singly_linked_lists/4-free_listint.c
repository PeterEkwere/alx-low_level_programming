#include "lists.h"
/**
 * free_listint - is a function that frees
 * The memory allocated to the nodes
 * @head: is a pointer to the first pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head->next != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
