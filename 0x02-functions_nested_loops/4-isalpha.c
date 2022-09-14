#include "main.h"

/**
 * _isalpha - entry point
 * Description: function that checks for alphabetic character.
 * @c: single letter input
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise returns 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

