#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
		char low;

		for (low = 'a'; low <= 'z'; low++)
			putchar(low);
			putchar('\n');

		return (0);

}
