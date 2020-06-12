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
int num = 48;

while (num <= 57)
{
putchar(num);
if (num < 57)
{
putchar(44);
putchar(32);
}
num++;
}
putchar('\n');
return (0);
}
