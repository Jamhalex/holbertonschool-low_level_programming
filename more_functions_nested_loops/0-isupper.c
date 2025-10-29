#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter (A-Z).
 * @c: Character to check (ASCII code).
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
