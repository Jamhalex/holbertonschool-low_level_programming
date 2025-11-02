#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination buffer; must have enough space.
 * @src:  Source string to append.
 *
 * Description:
 * Appends the string pointed to by @src to the end of @dest.
 * Overwrites the terminating null byte of @dest, then adds a new '\0'.
 *
 * Return: Pointer to @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p)
		p++;

	while (*src)
		*p++ = *src++;

	*p = '\0';

	return (dest);
}

