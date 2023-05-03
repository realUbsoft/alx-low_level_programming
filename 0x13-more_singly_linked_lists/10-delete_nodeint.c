#include "lists.h"

/**
 * delete_nodeint_at_index - this will deletes a node at a certain index
 * @head: points to the first element in the list
 * @index: the index of the node to delete
 *
 * Return: 1 if Success, or -1 if Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tem = *head;
	listint_t *cur = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tem);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tem || !(tem->next))
			return (-1);
		tem = tem->next;
		i++;
	}


	cur = tem->next;
	tem->next = cur->next;
	free(cur);

	return (1);
}
