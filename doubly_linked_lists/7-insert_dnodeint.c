#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position.
* @h: Pointer to the pointer to the head of the doubly linked list.
* @idx: Index of the list where the new node should be added. Index starts at 0.
* @n: Value to store in the new node.
*
* Return: Address of the new node, or NULL if it failed.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
