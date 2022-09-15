#include "main.h"

/**
 * int _isupper - checks if a character is uppercare or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
