#include "main.h"
/**
 * main - main Block
 * Description: Print _putchar,followed by a new line.
 * The program should return 0.
 * Return: 0
 */
int main(void)
{
	char stringOne[8] = "_putchar";/*Variable declaration and Assignment*/

	int i = 0;

	while (i < 8)
	{
		_putchar(stringOne[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}


