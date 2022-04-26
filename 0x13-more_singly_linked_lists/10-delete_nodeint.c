#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node
 * @head: address of first element
 * @index: where to remove
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *nextnode;
	unsigned int i = 0;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < (index - 1))
	{
		if (temp->next)
			temp =  temp->next;
		else
			return (-1);
		i++;
	}

	nextnode = temp->next;
	temp->next = nextnode->next;
	free(nextnode);

	return (1);
}
