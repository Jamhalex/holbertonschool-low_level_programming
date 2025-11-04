#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates two strings.
 * @dest: Destination buffer; must have enough space.
 * @src:  Source string to append.
 *
 * Description:
 * Appends the string pointed to by @src to the end of @dest.
 * Overwrites the terminating null byte of @dest, then adds a new '\0'.
 *
 * Return: Pointer to @dest.
 */

char *_strncat(char *dest, char *src)
{
char *p = dest;

	/* move p to the end of dest */
	while (*p)
		p++;

	/* copy src (without its '\0') to the end of dest */
	while (*src)
		*p++ = *src++;

	/* add the new string terminator */
	*p = '\0';

	return (dest);

}
