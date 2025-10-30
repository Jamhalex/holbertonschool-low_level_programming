#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: String to reverse.
 */
void rev_string(char *s)
{
int i, j;
char tmp;
i = 0;
while (s[i] != '\0')
i++;
j = 0;
i = i - 1;
while (j < i)
{
tmp = s[j];
s[j] = s[i];
s[i] = tmp;
j++;
i--;
}
}
