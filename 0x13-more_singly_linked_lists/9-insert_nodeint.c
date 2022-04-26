#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert node
 * @head: address of first elemeny
 * @idx: where to insert
 * @n: integer to insert
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int i = 1;

	temp = *head;
	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		*head = new_node;
		new_node->next = temp;
		return (*head);
	}
	while (i < idx)
	{
		temp = temp->next;
		i++;
		if (!temp)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
