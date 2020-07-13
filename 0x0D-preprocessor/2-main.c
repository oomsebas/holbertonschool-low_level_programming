#include <stdio.h>


/**
 *main - program that prints the source file where it was compiled
 *Return: None
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
