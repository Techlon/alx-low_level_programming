#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - main entry point
 * Description: function that takes a pointer to an int as parameter;
 * @n: updates the value it points to 98
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int *n = &n;

	*n = 98;
	return (0);
}
