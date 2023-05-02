#include "lists.h"

/**
 * add_nodeint - a node are added at the beginning of a linked list
 * @head: points to the first node in the list
 * @n: input to the node
 *
 * Return: points to the a node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (!a)
		return (NULL);

	a->n = n;
	a->next = *head;
	*head = a;

	return (a);
}
