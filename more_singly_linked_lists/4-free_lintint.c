#include "lists.h"
/**
 *
 *
 *
 */
void free_listint(listint_t *head)
{
	lintint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
