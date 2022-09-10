#include <stdlib.h>
#include <time.h>
#include  <stdio.h>

/** 
 * main - main block
 * Description: Print statements based on the last digit of the random number.
 * Return: 0
 */

int main(void)
{
	int(n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
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
