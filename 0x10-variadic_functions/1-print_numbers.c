#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @n: arguments
 * @separator: seperate between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	if (seperator == NULL)
		seperator = "";
	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(list, int);
				if (i < n - 1)
					printf("%s", seperator);
	}
	printf("\n");
	va_end(list);
}
