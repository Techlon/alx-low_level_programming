#include <stdio.h>

/**
 * main - main Block
 * Print all possible different combination of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *Return : 0
 */

int main(void)
{
	int i, j, k;
	
	i = 0;

	while (i < 100)
	{
		j = i % 10; /*singles digit*/
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		i++;
	}
	putchar ('\n');

	return (0);
}

