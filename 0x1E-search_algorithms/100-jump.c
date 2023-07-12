#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in sorted array of integers
 * @array: Pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located, -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, jump;

	if (!array)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i + jump >= size || array[i + jump] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i, i + jump);
			for (j = i; j < size && j <= i + jump; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
	}
	return (-1);
}
