#include "lists.h"
/**
 *get_nodeint_at_index - locates node in linked list
 *@head: pointer to head of node
 *@index: the index of the node to locate
 *Return: if no node = null, or the located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
