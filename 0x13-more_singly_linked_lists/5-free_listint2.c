#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - free list, set head to null
 * @head: pointer to first element
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
