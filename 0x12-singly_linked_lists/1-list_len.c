#include "lists.h"
/**
 * list_len - number of elements in singly linked list
 * @h: size of list h
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;

	return (i);
}
