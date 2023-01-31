#include "lists.h"
/**
 * find_listint_loop - find the loop in a linked list
 * @head: head pointer
 * Return: NULL if there is no loop or the address of the start loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		{
			tortoise = head;
			break;
		}
	}
	if (!tortoise || !hare || !hare->next)
		return (NULL);

	while (tortoise != hare)
	{
		tortoise = tortoise->next;
		hare = hare->next;
	}
	return (hare);
}
