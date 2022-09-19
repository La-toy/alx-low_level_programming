#include "main.h"

/**
 * _strlen - function to get the length of a string
 * @s: The string to get the length of
 *
 * Return: The lenth of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
