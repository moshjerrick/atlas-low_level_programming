#include "lists.h"
#include <stdlib.h>
/**
 *list_len - finds number of elements in list_t list
 *
 *@h: pointer to linked list
 *
 *Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

		while (h)
		{
			elements++;
			h = h->next;
		}
	return (elements);
}
