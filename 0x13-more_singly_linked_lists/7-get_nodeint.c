#include "lists.h"
/**
 * get_nodeint_at_index - the 9th node of a listint_t list
 * @head: a head pointer
 * @index:inedx of a code
 * Return: NULL if node not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
