#include "lists.h"

/**
 *free_list - freees a linked list
 *@head: pointer to first node in list
 *
 *
 *Return: nada
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
