#include "lists.h"
/**
 * print_listint - prints all element in listint_t
 * @h: pointer to node
 * Return: the number of node
*/
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}

