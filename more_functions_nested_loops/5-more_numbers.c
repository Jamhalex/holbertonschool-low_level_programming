#include "main.h"

/**
 * print_num - Prints a non-negative integer (0..99) using _putchar.
 * @n: Number to print.
 *
 * Return: void
*/
static void print_num(int n)
{
	if (n >= 10)
	{
			_putchar('0' + (n / 10));
	}
	_putchar('0' + (n % 10));
}

/**
 * more_numbers - Prints 10 times the numbers 0..14, each on a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int row;
	int n;

	for (row = 0; row < 10; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			print_num(n);
		}
		_putchar('\n');
	}
}
