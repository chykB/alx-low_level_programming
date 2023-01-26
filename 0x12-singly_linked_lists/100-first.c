#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first -  print a sentence before the main
 * function is expected
*/
void first(void)
{
	printf("Yuo're beat! and yet you must allow,\n");
	printf("I bore my house upon my back!\n");
}
