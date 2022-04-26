#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - free lost memory
 * @head: starting address
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
