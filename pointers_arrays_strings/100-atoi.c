#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Return: The parsed integer (in range of int).
 */
int _atoi(char *s)
{
int i, sign, started, value;
sign = 1;
value = 0;
started = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
{
if (!started)
sign = -sign;
else
break;
}
else if (s[i] == '+')
{
if (started)
break;
}
else if (s[i] >= '0' && s[i] <= '9')
{
started = 1;
value = value * 10 + (s[i] - '0');
}
else
{
if (started)
break;
}
}
return (sign * value);
}
