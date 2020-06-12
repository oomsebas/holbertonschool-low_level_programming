#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n = 0, d, u;

	while (n <= 99)
	{
		d = n / 10;
		u = n % 10;
		if (u != d && u > d)
		{
		putchar(d + 48);
		putchar(u + 48);
		putchar(32);
		}
		n++;

	}
putchar('\n');
return (0);
}
