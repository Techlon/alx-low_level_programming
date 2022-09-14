#include "main.h"
/**
 * _islower - enrty point
 * Description: A function that checks for lowercase character.
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise.
 */
int _islower(int c)/*Description: Function returns 0 or 1*/
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
