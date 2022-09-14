#include "main.h"

/**
 * _isalpha - entry point
 * Description: function that checks for alphabetic character.
 * @c: single letter input
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise returns 0
 */

int _isalpha(int c)
{
	char c;
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}

