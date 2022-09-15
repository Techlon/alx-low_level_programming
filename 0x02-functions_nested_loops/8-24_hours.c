#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 * for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int t, p;

	for (t = 0; t < 24; t++)
	{
		for (p = 0; p < 60; p++)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
			_putchar('\n');
		}
	}
}
