#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - main functio of the program
 *@argc: number of arguments passsed
 *@argv: the arguments passed
 *Return: 0 sucess, 1 fail.
 */
int main(int argc, char **argv)
{
	int num1, num2, calc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);

	}

	calc = get_op_func(argv[2])(num1, num2);

	printf("%d\n", calc);

	return (0);

}
