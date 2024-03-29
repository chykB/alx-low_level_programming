#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all element in listint_t
 * @h: pointer to node
 * Return: the number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

