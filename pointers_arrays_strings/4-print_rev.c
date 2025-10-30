#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a newline.
 * @s: String to print in reverse.
 */
void print_rev(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
len++;
while (len > 0)
{
len--;
_putchar(s[len]);
}
_putchar('\n');
}
