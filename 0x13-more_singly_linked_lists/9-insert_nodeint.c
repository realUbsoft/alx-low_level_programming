#include "lists.h"

/**
 * insert_nodeint_at_index - to inserts a b node in a linked list,
 * at any given position
 * @head: points to the first node in the list
 * @idx: This is the index where the b node is added
 * @n: node where data will be inserted
 *
 * Return: points to the b node, or Returns NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *b;
	listint_t *tem = *head;

	b = malloc(sizeof(listint_t));
	if (!b || !head)
		return (NULL);

	b->n = n;
	b->next = NULL;

	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (new);
	}

	for (i = 0; tem && i < idx; i++)
	{
		if (i == idx - 1)
		{
			b->next = tem->next;
			tem->next = b;
			return (b);
		}
		else
			tem = tem->next;
	}

	return (NULL);
}
