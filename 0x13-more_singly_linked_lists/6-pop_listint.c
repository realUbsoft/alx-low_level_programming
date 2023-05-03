#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked list
 * @head: this points to the first element in the linked list
 *
 * Return: this returns the data inside the elements that was deleted,
 * or or return 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tem;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (number);
}
