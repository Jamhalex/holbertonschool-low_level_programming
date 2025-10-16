#include <stdio.h>

/**
 * main - Prints alphabet without qz
 *
 * Return: Always 0
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)

	{
		if (alphabt != 'q' && alphabt != 'e')
		putchar(alphabt);
	}

	putchar('\n');
}
