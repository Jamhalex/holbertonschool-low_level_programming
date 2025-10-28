#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @num: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int r;

	r = num % 10;

	if (r < 0)
		r = -r;

	_putchar(r + '0');
	return (r);
}
