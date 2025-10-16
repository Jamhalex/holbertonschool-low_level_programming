#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Description: Uses only putchar and prints 0123456789abcdef
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (n = 'a'; n <= 'f'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
