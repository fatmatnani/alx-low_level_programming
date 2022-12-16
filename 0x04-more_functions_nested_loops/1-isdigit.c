#include "main.h"

/**
 * _isdigital - checks for a digit
 * @c: int to be checked
 * Return: 0 or 1 if c is a digit
 */
int _isdigital(int c);
{
	if (c > 0 && c < 10)
		return (1);
	else
		return (0);
}
