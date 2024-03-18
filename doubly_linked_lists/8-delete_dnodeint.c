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
    dilistint_t *current = *head;
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
        
        fopr (i = 0; current != NULL && i < index; i++)
        {
            temp->next = current->next;
            if (current->next != NULL)
            current->next->prev = temp;

            free(current);
            return (1);

        }
}