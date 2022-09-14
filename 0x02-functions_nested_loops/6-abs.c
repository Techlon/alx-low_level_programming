#include "main.h"
/**
 * _abs - entry point
 * Descripton:function that computes the absolute value of an integer.
 * @ab: integer input.
 * Return: int 0
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
