#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by newline.
 * @str: String to print from halfway point.
 */
void puts_half(char *str)
{
int len, start, i;
len = 0;
while (str[len] != '\0')
len++;
if ((len % 2) == 0)
start = len / 2;
else
start = (len - 1) / 2 + 1;
for (i = start; i < len; i++)
_putchar(str[i]);
_putchar('\n');
}
