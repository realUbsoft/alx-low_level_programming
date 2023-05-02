#include "lists.h"

/**
 * add_nodeint_end - To adds a node at the end of a linked list
 * @head: points to the first element in the list
 * @a: to insert data in the new element
 *
 * Return: points to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int a)
{
	listint_t *new;
	listint_t *tem = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->a = a;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = new;

	return (new);
}
