#include "holberton.h"

/**
 *times_table - Prints the nine times table, starting with zero.
 *
 *
 *Return: None
 *
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if (j != 9)
			{

				print_table(k, i, j);
			}
			else
			{
				if (k <= 9)
				{
					_putchar(k + '0');
				}
				else
				{
					_putchar(k / 10 + '0');
					_putchar(k % 10 + '0');
				}
			}
		}
		_putchar('\n');
	}
}


/**
 *print_table - Prints the special spaces
 *@i: index for rows
 *@j: index for columns
 *@k: i * j
 *
 *Return: None
 *
 */
void print_table(int k, int i, int j)
{
	if (k <= 9)
	{
		_putchar(k + '0');
		_putchar(',');
		_putchar(' ');
		if ((i * (j + 1)) <= 9)
			_putchar(' ');
	}
	else
	{
		_putchar(k / 10 + '0');
		_putchar(k % 10 + '0');
		_putchar(',');
		_putchar(' ');
	}

}
