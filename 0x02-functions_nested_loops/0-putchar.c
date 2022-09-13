#include "main.h"

/**
 * main - main Block
 * Description: Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 * Return : 0
 */

int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '0')
	{
		_putchar(putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}


