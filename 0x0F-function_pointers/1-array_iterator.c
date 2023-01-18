#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given each element of an array
 * @array: pointer array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0, i < size, i++)
	{
		action(array[i]);
	}
}
