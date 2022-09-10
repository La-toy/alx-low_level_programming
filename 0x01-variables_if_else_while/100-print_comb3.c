#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	int a,b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);

				if (a != '8' || (a == '8' && b != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
