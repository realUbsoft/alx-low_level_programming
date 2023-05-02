#include "lists.h"

/**
 * add_nodeint_end - To adds b node at the end of a linked list
 * @head: points to the first element in the list
 * @n: to insert data in the b element
 *
 * Return: points to the b node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *b;
	listint_t *tem = *head;

	b = malloc(sizeof(listint_t));
	if (!b)
		return (NULL);

	b->n = n;
	b->next = NULL;

	if (*head == NULL)
	{
		*head = b;
		return (b);
	}

	while (tem->next)
		tem = tem->next;

	tem->next = b;

	return (b);
}
