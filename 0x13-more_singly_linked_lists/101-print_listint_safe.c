#include <stdio.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - this Counts num of unique nodes
 * in a loop listint_t link list.
 * @head: points to the head of the listint_t.
 *
 * Return: it Returns - 0. if it not looped
 * Or - the num of the unique nodes in list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *boy, *great;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	boy = head->next;
	great = (head->next)->next;

	while (great)
	{
		if (boy == great)
		{
			boy = head;
			while (boy != great)
			{
				nodes++;
				boy = boy->next;
				great = great->next;
			}

			boy = boy->next;
			while (boy != great)
			{
				nodes++;
				boy = boy->next;
			}

			return (nodes);
		}

		boy = boy->next;
		great = (great->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - To Prints a listint_t list.
 * @head: points to the head of the listint_t list.
 *
 * Return: num of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
