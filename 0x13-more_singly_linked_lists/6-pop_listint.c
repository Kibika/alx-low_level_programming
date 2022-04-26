#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - remove element from head
 * @head: address of first element
 * Return: 0 if fail 1 if success
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);

	return (i);
}
