#include "main.h"

/**
 * _atoi - Converts a string to an integer safely (GNU89).
 * @s: String to convert.
 *
 * Return: Parsed int (undefined on true overflow, but avoids UB on INT_MIN).
 */
int _atoi(char *s)
{
int i;
int sign;
int started;
int res;
sign = 1;
started = 0;
res = 0;
/* scan: collect sign flips before digits; once digits start, stop on first non-digit */
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-' && !started)
{
sign = -sign;
continue;
}
if (s[i] == '+' && !started)
{
continue;
}
if (s[i] >= '0' && s[i] <= '9')
{
int d = s[i] - '0';
started = 1;
/* accumulate as negative: res = res*10 - d; stays within int for INT_MIN */
res = res * 10 - d;
}
else if (started)
{
break;
}
}
if (sign == -1)
return res;
/* sign is positive: return -res; note: if true positive overflow happens, C leaves it undefined */
return -res;
}
