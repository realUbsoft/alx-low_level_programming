#include "lists.h"

/**
 * add_nodeint_end - To adds a node at the end of a linked list
 * @head: points to the first element in the list
 * @a: data to insert in n element
 *
 * Return: points to the n node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int a)
{
	listint_t *n;
	listint_t *tem = *head;

	n = malloc(sizeof(listint_t));
	if (!n)
		return (NULL);

	n->a = a;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = n;

	return (n);
}
