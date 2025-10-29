#include "main.h"

/**
 * print_numbers - Prints the digits 0 through 9, then a newline.
 *
 * Description: Uses _putchar to print each digit character in order.
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
	_putchar('\n');
}
