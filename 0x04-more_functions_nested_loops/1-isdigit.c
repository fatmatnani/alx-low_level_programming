#include "main.h"

/**
 * _isdigital - checks for a digit
 * @c: char to be checked
 * Return: 0 or 1 if c is a digit
 */
  
 int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
