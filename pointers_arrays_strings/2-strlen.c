#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to measure.
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
int len;
len = 0;
while (s[len] != '\0')
len++;
return (len);
}
