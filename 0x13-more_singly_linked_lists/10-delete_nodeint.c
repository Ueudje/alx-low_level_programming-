#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at index
  * @head: head of a list
  * @index: index of the node to delete
  *
  * Return: 1 if it succed, -1 if it failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new;

	temp = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
		{
			temp = temp->next;

		}

		if (temp == NULL || (temp->next == NULL && index != 0))
			return (-1);
	}

	new = temp->next;

	if (index != 0)
	{
		temp->next = new->next;
		free(new);
	}
	else
	{
		free(temp);
		*head = new;
	}

	return (1);
}
