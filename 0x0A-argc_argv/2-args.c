#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments received.
 * @argv: The array of arguments received..
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
