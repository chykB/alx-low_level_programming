#include "main.h"
/**
 * _memset - fills a block of memory with a constant byte.
 * @n: bytes of the memory area pointed to by @s
 * @s: constant byte
 * @b: memory area pointer
 * Return: a pointer to the memory area by @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}

