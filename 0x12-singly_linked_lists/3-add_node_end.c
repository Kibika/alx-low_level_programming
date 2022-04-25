#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - add element to end of list
 * @head: address of first element
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (temp)
		temp->next = new_node;
	else
		*head = new_node;

	return (new_node);

}
