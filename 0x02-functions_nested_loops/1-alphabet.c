#include "main"
/**
 * print_alpahbet - print all alphabet in lower case
 *
 * Return: always 0
*/
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	_putchar('\n');
	return (0);
}
