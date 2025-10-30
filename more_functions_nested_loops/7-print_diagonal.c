#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using '\' characters.
 * @n: Number of times '\' should be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
int row;
int s;
if (n <= 0)
{
_putchar('\n');
return;
}
for (row = 0; row < n; row++)
{
for (s = 0; s < row; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
