#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @c: char to initialize
 * @size: number of bytes to allocate
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c);
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
