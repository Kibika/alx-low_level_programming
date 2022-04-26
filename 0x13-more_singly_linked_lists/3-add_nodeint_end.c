#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at the end
 * @head: address of first element
 * @n: int to be added
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	temp = *head;
	while (temp && temp->next != NULL)
		temp = temp->next;

	new_node->n = n;
	new_node->next = NULL;
	if (temp)
		temp->next = new_node;
	else
		*head = new_node;

	return (new_node);
}
