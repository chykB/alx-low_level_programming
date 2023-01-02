#include "main.h"
/**
 * _strspn - function to find the length of the initial portion of a string
 * @s: initial portion
 * @accept: consist of bytes
 * Return: The num of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
}
