#include "main.h"

/**
 * print_last_digit - entry position
 * @ab: the value of the last digit
 * Return: int 0
 */

int print_last_digit(int ab)
{
	int result = ab % 10;

	if (result < 0)
	{
		result = -1 * result;
	}

	_putchar (result + '0');
	return (result);
}
