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

int i = 48;
int j = 48;

for (i; i <= 57 ; i++)
{
	do {
		putchar(i);
		putchar(j);
		putchar(44);
		putchar(32);
		j++;
	} while (j < 58);
j = 48;
}
putchar('\n');
return (0);
}
