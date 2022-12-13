#include "main.h"
/**
 * _islower - check if character c is lower case
 * @c: check for this letter
 * Return: 1 if character is lowercase, otherwise return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
