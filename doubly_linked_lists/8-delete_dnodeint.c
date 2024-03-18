#include "lists.h"
#include <stdlib.h>
/**
 * 
 * 
 * 
 * 
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

		if (index == 0)
		{
			*head = (*head)->next;
			if (*head != NULL)
			(*head)->prev = NULL;
			free(current);
			return (1);
		}
		temp = *head;

		for (i = 0; current != NULL && i < index; i++)
		{
			temp = current;
			current = current->next;
		}
		if (current == NULL)
		return (-1);

		temp->next = current->next;
		if (current->next != NULL)
		current->next->prev = temp;

		free(current);
		return (1);
}