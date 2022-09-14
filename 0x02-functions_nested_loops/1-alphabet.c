#include "main.h"

/**
 * print_alphabet - entry point
 * Description: prints the alphabet in lower case
 * followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
