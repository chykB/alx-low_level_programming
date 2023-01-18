#include "function_pointers"
/**
 * int_index - return index of the first element
 * @array: pointer to array
 * @size: number of element in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if no element matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > o)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
