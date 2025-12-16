#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated memory containing s1
 * followed by the first n bytes of s2, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* get length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* get length of s2 */
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	new = malloc(sizeof(char) * (len1 + n + 1));
	if (new == NULL)
		return (NULL);

	/* copy s1 */
	for (i = 0; i < len1; i++)
		new[i] = s1[i];

	/* copy first n bytes of s2 */
	for (j = 0; j < n; j++)
		new[i + j] = s2[j];

	new[i + j] = '\0';

	return (new);
}

