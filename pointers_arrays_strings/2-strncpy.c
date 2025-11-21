#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy at most n bytes from src to dest.
 * @dest: Destination buffer; must be large enough for n bytes.
 * @src: Source string.
 * @n: Maximum number of bytes to copy from src.
 *
 * Description:
 * Copies up to n bytes from @src to @dest. If @src has fewer than n bytes,
 * the remainder of @dest is padded with '\0'. If @src has n or more bytes,
 * no terminating null byte is added to @dest (strncpy semantics).
 *
 * Return: Pointer to @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
