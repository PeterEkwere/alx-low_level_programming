#include "lists.h"
/**
 * add_node_end - is a function that adds a new node
 * To the end of the node
 * @head : is a pointer to the head of a node
 * @str : is an array of character
 * Return: a drress of the new element or null if  failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	char *duplicate;
	list_t *temp;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}

	duplicate = strdup(str);
	if (str == NULL)
	{
		free(NULL);
		return (NULL);
	}

	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (*head);
}
