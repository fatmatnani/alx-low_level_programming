# include "main.h"

/**
 * _isuppe - uppercase letters
 * @c: char to be checked
 * Return: 0 or 1 if c is uppercase
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
