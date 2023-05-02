#include "lists.h"

/**
 * add_nodeint - new node are added at the beginning of a linked list
 * @head: points to the first node in the list
 * @d: input to the node
 *
 * Return: points to the new node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int d)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->d = d;
	new->next = *head;
	*head = new;

	return (new);
}
