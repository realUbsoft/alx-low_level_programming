#include "lists.h"

/**
 * get_nodeint_at_index - this returns the node in a linked list
 * @head: the first node in the linked list
 * @index: the index of the node to be returned
 *
 * Return: this points to the node we re to Returned, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b = 0;
	listint_t *tem = head;

	while (tem && b < index)
	{
		tem = tem->next;
		b++;
	}

	return (tem ? tem : NULL);
}
