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

while (min <= 122)
{
if (min == 'q' || min == 'e')
min++;
putchar(min);
min++;
}
putchar('\n');
return (0);
}
