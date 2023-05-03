#include "lists.h"

/**
 * free_listint2 - This  frees the linked list
 * @head: the head points to the listint_t list that will be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *tem;

	if (head == NULL)
		return;

	while (*head)
	{
		tem = (*head)->next;
		free(*head);
		*head = tem;
	}

	*head = NULL;
}
