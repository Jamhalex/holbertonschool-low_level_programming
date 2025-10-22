#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: Uses _putchar to print the alphabet followed by a new line,
 * repeated ten times.
 */
void print_alphabet_x10(void)
{
int line;
char letter;
for (line = 0; line < 10; line++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
