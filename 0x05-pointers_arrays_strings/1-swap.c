#include "main.h"
/**
 * swap_int - swap the value of two int
 * @a: first int
 * @b: the second int
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}

