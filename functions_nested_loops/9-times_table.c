#include "main.h"

/*
 * times_table - Prints the 9 times table, starting with 0.
<<<<<<< HEAD
 * Description: Prints a 10x10 grid (0..9) where each product is
 * right-aligned in a 2-character field, separated by comma and space.
 * Return: void
=======
 *
 * Description:
 * Prints a 10x10 grid (0..9) where each product is right-aligned
 * in a 2-character field, separated by comma and space.
>>>>>>> 30351451813ca2dd767b742d28752da9694539f0
 */

void times_table(void)
{
<<<<<<< HEAD
    int row, col, prod;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            prod = row * col;

            if (col == 0)
            {
                _putchar('0');
	    }
            else
            {
                _putchar(',');
                _putchar(' ');

                if (prod < 10)
                {
                    _putchar(' ');
                    _putchar(prod + '0');
		}
                else
                {
                    _putchar((prod / 10) + '0');
                    _putchar((prod % 10) + '0');
		}
	    }
	}
        _putchar('\n');
    }
}
=======
	int row, col, prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;

			if (col == 0)
			{
				/* first column: print single digit (or 0) without leading comma */
				_putchar('0' + prod);
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				/* right-align to width 2 */
				if (prod < 10)
				{
					_putchar(' ');
					_putchar('0' + prod);
				}
				else
				{
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
		}
		_putchar('\n');
	}
}
>>>>>>> 30351451813ca2dd767b742d28752da9694539f0
