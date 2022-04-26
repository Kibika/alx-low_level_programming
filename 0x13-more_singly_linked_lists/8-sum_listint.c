#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - sum elements
 * @head: first element of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int i;
	listint_t *temp;

	temp = head;
	for (i = 0; temp; i++, temp = temp->next)
	{
		if (temp != NULL)
		{
			sum += temp->n;
		}
		else
			return (0);
	}
	return (sum);
}
