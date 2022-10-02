#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the Multiplication of two numbers.
 * @argc: The number of arguments given to the program.
 * @argv: The array of pointers to the arguments.
 *
 * Return: If two arguments are received - 0
 * If no arguments are received -1.
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;

	printf("%d\n", res);

	return (0);
}
