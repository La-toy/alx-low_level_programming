#include "main.h"

/**
 * _strncat - concatenates two strings
 * using at most n bytes from src
 * @dest: the string to be appended
 * @src: the string to be appended to dest
 * @n: the number of bytes form src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, dest_len = 0;

	while (dest[j++])
		dest_len++;

	for (j = 0; src[j] && j < n; j++)
		dest[dest_len++] = src[j];

	return (dest);
}
