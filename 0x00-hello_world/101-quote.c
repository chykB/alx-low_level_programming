#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: c program that print to standard error
 *
 * Return: 0
*/
int main(void)
{
	write(1, "and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
