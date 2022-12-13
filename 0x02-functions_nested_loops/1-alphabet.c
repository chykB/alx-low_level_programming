#include "main.h"
/**
 * print_alpahbet - print all alphabet in lower case
 *
*/
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	_putchar('\n');
}
