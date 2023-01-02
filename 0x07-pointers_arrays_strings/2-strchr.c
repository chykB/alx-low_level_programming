#include "main.h"
/**
 * _strchr - function that locate a character in a string
 * @c: character to print
 *
 * @s: pointer to the character
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);

}
