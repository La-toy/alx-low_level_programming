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
		char alpha = 'a';

		while (alpha <= 'z')
		{
			putchar (alpha);
			alpha++;
				}
		putchar('\n');
		return (0);
}
