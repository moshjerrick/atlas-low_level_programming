#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_s
{
	int n;

	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	if (*head == NULL)
		return (-1);

	dlistint_t *current = *head;
	dlistint_t *next_node;

	if (index == 0)
    {
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	unsigned int i;

	for (i = 0; current != NULL && i < index - 1; i++)
    {
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	next_node = current->next->next;
	free(current->next);
	current->next = next_node;

	if (next_node != NULL)
		next_node->prev = current;

	return (1);
}

void print_dlist(dlistint_t *head)
{
	while (head != NULL)
    {
		printf("%d ", head->n);
		head = head->next;
	}
	printf("\n");
}

int main(void)
{
	dlistint_t *head = NULL;


	for (int i = 0; i < 5; i++)
    {

		dlistint_t *new_node = malloc(sizeof(dlistint_t));
		new_node->n = i;
		new_node->prev = NULL;
		new_node->next = head;
		if (head != NULL)
			head->prev = new_node;
		head = new_node;
	}

	printf("Original list: ");
	print_dlist(head);

	int result = delete_dnodeint_at_index(&head, 2);

	if (result == 1)
    {
		printf("After deleting node at index 2: ");
		print_dlist(head);
	} else
    {
		printf("Failed to delete node at index 2.\n");
	}


	while (head != NULL)
    {
		dlistint_t *temp = head;
		head = head->next;
		free(temp);
	}

	return (0);
}
