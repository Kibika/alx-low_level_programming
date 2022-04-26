#include "lists.h"
#include "stdlib.h"
/**
 * get_nodeint_at_index - get node
 * @head: address of first element
 * @index: find node at index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;
	while (i < index)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
		i++;
	}

	if (temp)
		return (temp);
	else
		return (NULL);
}
