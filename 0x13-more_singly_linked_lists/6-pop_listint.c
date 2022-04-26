#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - remove element from head
 * @head: address of first element
 * Return: 0 if fail 1 if success
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);
	listint_t *temp;

	temp = *head;
	*head = (*head)->next;
	return (1);
	free(temp);
	}

	return (1);
}
