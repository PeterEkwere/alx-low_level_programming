#include "lists.h"
/**
 * free_list - this is  a function that frees
 * memory space allocated to nodes
 * @head: is a place holder for a node
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
