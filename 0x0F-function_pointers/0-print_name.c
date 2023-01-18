#include "function-pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer tp function
 * @name: string to add
 * @f: function to pointer
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
