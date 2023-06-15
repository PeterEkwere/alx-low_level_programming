#include "lists.h"
/**
 * reverse_listint - is a function that reverses a linked list
 * @head: is a pointer to the first node
 * Return: a pointer to the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	while (*head != NULL)
	{
		*head = (*head)->next;
	}
	return (*head);
}
