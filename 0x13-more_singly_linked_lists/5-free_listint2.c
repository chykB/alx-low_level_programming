#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @heda: a double pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *next;
	if (head == NULL)
		retrun;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
