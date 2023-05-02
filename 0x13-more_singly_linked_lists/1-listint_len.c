#include "lists.h"

/**
 * listint_len - to return num of elements that is in a linked lists
 * @u: linked list of type listint_t to move
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *u)
{
	size_t num = 0;

	while (u)
	{
		num++;
		u = u->next;
	}

	return (num);
}
