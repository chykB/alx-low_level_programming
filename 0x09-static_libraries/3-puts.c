#include "main.h"


/**
 * _puts -  prints a string
 *@str: the string to print
 * Return: the length of the string
*/
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_puts('a');
		a++;
	}
	_puts('\n');
}
