#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: String to convert.
 *
 * Description: Skips non-sign/non-digit chars, accumulates the net sign from
 * any leading '+' or '-' before digits, then parses contiguous digits.
 * Prevents signed overflow by clamping to INT_MAX/INT_MIN.
 *
 * Return: The parsed integer.
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int started;
	int res;

	sign = 1;
	res = 0;
	started = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
			if (!started && (s[i] == '-' || s[i] == '+'))
			{
						if (s[i] == '-')
							sign = -sign;
						continue;
			}

			if (s[i] >= '0' && s[i] <= '9')
			{
						int d = s[i] - '0';

						started = 1;

						if (sign > 0)
						{
										if (res > (INT_MAX - d) / 10)
											return (INT_MAX);
										res = res * 10 + d;
						}
						else
						{
										/* Build as negative to avoid INT_MIN flip overflow */
										if (res < (INT_MIN + d) / 10)
											return (INT_MIN);
										res = res * 10 - d;
						}
			}
			else if (started)
			{
						break;
			}
	}

	return (res);
}
