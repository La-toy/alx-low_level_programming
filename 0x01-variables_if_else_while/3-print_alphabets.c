#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower = 'a';                                                                                      			                char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	       	putchar('\n');
		return (0);
}
