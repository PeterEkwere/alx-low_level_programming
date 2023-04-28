#include "lists.h"
/**
 * add_node - is a function that adds
 * a node to the beginning of the lists
 *
 * @head: is a pointer to the head of the list
 * @str: is a character array
 * Return: a pointer to a the first node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *duplicate;


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

	new_node->str = duplicate;
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
