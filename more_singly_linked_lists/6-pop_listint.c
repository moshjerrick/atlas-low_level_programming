#include "lists.h"
/**
 *pop_listint - deletes head node
 *@head: pointer to list
 *Return: if empty 0, or the head nodes data
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int n = 0;

	if (*head != NULL)
	{
		new_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = new_head;
	}
	return (n);
}
