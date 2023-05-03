#include "lists.h"

/**
 * free_listint_safe - linked list will be freed
 * @h: points to the node in linked list
 *
 * Return: num of elements in freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t le = 0;
	int d;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h - (*h)->next;
		if (d > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			le++;
		}
		else
		{
			free(*h);
			*h = NULL;
			le++;
			break;
		}
	}

	*h = NULL;

	return (le);
}
