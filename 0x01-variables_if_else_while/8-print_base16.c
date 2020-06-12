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

while (num <= 102)
{
putchar(num);
num++;
if (num == 57)
num = 97;
}
putchar('\n');
return (0);
}
