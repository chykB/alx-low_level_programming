#include "main.h"
/**
 * char *_strcpy - copies the string
 * @dest: `desitnation
 * @src: source
 * Return: 0
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
