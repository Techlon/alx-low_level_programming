#include "main.h"

/*
 * main - main Block
 * Description: Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 * Return : 0
 */

int main(void)
{
	char grev[] = "_putchar";
	int i = 0;

	while (grev[i] != '\0')
	{
		char(grev[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}


