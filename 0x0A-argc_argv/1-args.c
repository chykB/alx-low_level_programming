#include <stdio.h>

/**
 * main - print the unmber of command
 * @argc: argument count
 * @argv: argument list
 * Return: 0
*/
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
