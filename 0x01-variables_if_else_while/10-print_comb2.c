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
int k=0;

while (i<= 57)
{
	while (j <= 57)
	{
		if (k != 0)
		{		 
		putchar(44);
		putchar(32);
		}
		putchar(i);
		putchar(j);
		j++;
		k++;
	}
i++;
j = 48;
}
putchar('\n');
return (0);
}
