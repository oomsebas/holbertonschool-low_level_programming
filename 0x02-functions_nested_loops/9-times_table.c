#include "holberton.h"

/**
 *times-table - Prints the nine times table, starting with zero.
 *
 *
 *Return: None
 *
 */
void times_table(void)
{
	int n = 0, m = 0, z;

	while (n <= 9)
	{
		while (m <= 9)
		{
			z = n * m;
			if (z <= 9)
			{
				if (m != 0)
				{
				_putchar(' ');
				_putchar(' ');
				}
				_putchar( z + '0');
				if (m != 9)
				{
				_putchar(',');
				}
			}
			else
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
				if(m != 9)
				{
			        _putchar(',');
				}
			}
			m++;
		}
		_putchar('\n');
		n++;
		m = 0;
	}

}
