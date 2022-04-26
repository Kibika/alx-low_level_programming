#include "lists.h"
/**
 * listint_len - print no. of elements
 * @h: address of first element
 * Return: no. of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
