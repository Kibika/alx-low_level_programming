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
 * add_node - insert new elements into beginning of list
 * @head: address of first element
 * @str: srring to be added
 * Return: address of new element(head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	int c;

	new_node = (list_t *) malloc(sizeof(list_t));
	temp = (list_t *) malloc(sizeof(list_t));
	if (str == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	c = _strlen(str);
	temp->str = strdup(str);
	temp->len = c;
	temp->next = *head;
	new_node->str = temp->str;
	new_node->len = temp->len;
	new_node->next = NULL;
	*head = temp;
	return (*head);
}
