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
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}

	*head = pre;

	return (*head);
}
