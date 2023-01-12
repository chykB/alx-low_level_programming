#include "main.h"
/**
 * malloc_checked - Thi function will allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: Returns a pointer to the allocated memory
 * Status value equals 98 if malloc fails
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
