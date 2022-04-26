#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at beginning
 * @head: address of first element
 * @n: int to be added
 * Return: pointer t new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
