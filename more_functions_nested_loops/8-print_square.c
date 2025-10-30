#include "main.h"

/**
 * print_square - Prints a square using '#' characters.
 * @size: Size of the square.
 *
 * Return: void
 */
void print_square(int size)
{
int r;
int c;
if (size <= 0)
{
_putchar('\n');
return;
}
for (r = 0; r < size; r++)
{
for (c = 0; c < size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
