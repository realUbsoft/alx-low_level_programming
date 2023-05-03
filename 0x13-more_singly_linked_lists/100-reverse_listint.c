#include "lists.h"

/**
 * reverse_listint - this reverses the linked list
 * @head: points to the first node in the list
 *
 * Return: this returns pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *nex = NULL;

	while (*head)
	{
		nex = (*head)->nex;
		(*head)->nex = pre;
		pre = *head;
		*head = nex;
	}

	*head = pre;

	return (*head);
}
