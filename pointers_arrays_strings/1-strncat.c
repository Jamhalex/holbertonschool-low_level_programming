#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination buffer; must have enough space.
 * return - dest
 */

char *_strncat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	
	dest[j] = '\0';

	return (dest);

}
