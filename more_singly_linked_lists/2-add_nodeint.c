#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head != NULL)
	{

		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;

		return (new);
	}
	return (NULL);
}
