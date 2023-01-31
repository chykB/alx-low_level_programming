#include "lists.h"
/**
 * listint_len - the number of elements in a linked listint -t
 * @h: head pointer
 * Return: number of element
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
			count++;
	}
	return (count);
}
