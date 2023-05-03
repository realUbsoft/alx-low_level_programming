#include "lists.h"

/**
 * sum_listint - calc and sum all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tem = head;

	while (tem)
	{
		sum += tem->n;
		tem = tem->next;
	}

	return (sum);
}
