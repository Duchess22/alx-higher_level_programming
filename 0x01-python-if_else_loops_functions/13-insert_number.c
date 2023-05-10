#include "lists.h"
/**
 * insert_node - insert a number into a sorted singly linked list
 * @head: address of pointer to first node
 * @number: number to insert
 *
 * Return: pointer to inserted node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *p = NULL, *new = NULL;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = number;
		new->next = *head;
		if (!*head || new->n <= (*head)->n)
			*head = new;
		else
		{
			do {
				p = new->next;
				new->next = p->next;
			} while (new->next &&
				 new->n >= new->next->n);
			p->next = new;
		}
	}
	return (new);
}
