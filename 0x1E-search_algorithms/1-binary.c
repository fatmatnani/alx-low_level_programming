#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array between two boundary indices
 * @array: Pointer to the first element of the array to print
 * @start: Index to start printing from
 * @end: Index to stop printing
 */
void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i < end; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int mid;

	if (!array)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

