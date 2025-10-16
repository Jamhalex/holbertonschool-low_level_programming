#include <stdio.h>

/**
 * main - Prints alphabet without qz
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet != 'q' && alphabet != 'e')
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
