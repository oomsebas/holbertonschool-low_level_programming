#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{


char buf[80] = "and that piece of art is useful\" - Dora Korpar, 2015-10-1 \\n";
write(2, buf, strlen(buf));
return (0);
}
