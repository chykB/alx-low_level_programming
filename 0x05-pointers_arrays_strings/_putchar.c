#include "main.h"
#include <unistd>
/**
 * _putchar - print the charcter c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned
*/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
