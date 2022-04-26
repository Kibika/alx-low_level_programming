#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverse list iteratively
 * @head: address of first node
 * Return: head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode, *currentnode;

	prevnode = 0;
	currentnode = nextnode = *head;
	while (nextnode != 0)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	*head = prevnode;

	return (*head);
}
