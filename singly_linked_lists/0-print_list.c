#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
/**
 *print_list - prints elements of a list
 *@h: pointer
 *
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t  nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
