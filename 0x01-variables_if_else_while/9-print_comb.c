#include <stdio.h>

/**
 * main - main block
 * Description: print all possible numbers of single digit numbers.
 * Numbers must be separated by commas and a space.
 * You are not allowed to use any variable of type char.
 * You can only use 'putchar'up to four times.
 * Return: 0
 */

int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
