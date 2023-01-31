#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a list
 * @head: the head poiter
 * Return: sum all data
*/
int sum_listint(listint_ *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
