#include "functon_pointers.h"

/**
 * array_iterator - a function given as a parameter
 * @array: array to execute
 * @size: the size of the array
 * @action:  a pointerto the function
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
