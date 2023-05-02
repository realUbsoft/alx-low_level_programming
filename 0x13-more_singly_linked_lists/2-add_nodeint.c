#include "lists.h"

/**
 * add_nodeint - input node are added at the beginning of a linked list
 * @head: points to the first node in the list
 * @d: input to the node
 *
 * Return: points to the input node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int d)
{
	listint_t *input;

	input = malloc(sizeof(listint_t));
	if (!input)
		return (NULL);

	input->d = d;
	input->next = *head;
	*head = input;

	return (input);
}
