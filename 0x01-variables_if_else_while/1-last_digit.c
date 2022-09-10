#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/** 
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success) 
 */

int main(void)
{
	int(n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if else (n > 5)
	{
		printf("The Last Digit of", n, "is", "and is greater than 5\n");
	}
	if else (n == 0)
	{
		printf("The Last Digit of", n, "is", "and is 0\n");
	}
	if else ((n < 6) && (n != 0))
	{
		printf("The Last Digit of", n, "is", "and is less than 6 and not 0\n");
	}
	else
	{
		return (0);
	}
}
