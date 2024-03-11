#include "lists.h"
#include <stdio.h>
/**
 *listint_len - length of listint
 *@h: pointer 
 *
 *Return: lenth in nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
