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
int min = 97;
int may = 65;
while (min <= 122)
{
putchar(min);
min++;
}
while (may <= 90)
{
putchar(may);
may++;
}
putchar('\n');
return (0);
}
