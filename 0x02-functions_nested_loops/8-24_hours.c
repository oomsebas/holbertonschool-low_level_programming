#include "holberton.h"

/**
 * jack_bauer - print every minute in 00:00 format from 00:00 to 23:59.
 *
 * Return: none.
 */
void jack_bauer(void)
{
	int h = 0, m = 0;
	int h1, h2, m1, m2;

	while (h <= 23)
	{
		h1 = h / 10;
		h2 = h % 10;
		while (m <= 59)
		{
			m1  = m / 10;
			m2  = m % 10;
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
			m++;
		}
	h++;
	m = 0;
       	}
}
