#include "lists.h"
/**
 *
 *
 *
 *
 */
int sum_listint(listint_t *head);
{
	int amount = 0;

	if (head)
	{
		while (head)
		{
			amount += head->n;
			head = head->next;
		}
	}

	return (amount);
}
