#include "list.h"
/**
 * get_nodeint_at_index - the nineth node of a list
 * @head: a head pointer
 * @index:inedx of a code
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
