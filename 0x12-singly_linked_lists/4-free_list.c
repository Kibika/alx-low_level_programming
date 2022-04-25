#include "lists.h"
#include "stdlib.h"
/**
 * free_list - free memory containing list
 * @head: address of first element
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
