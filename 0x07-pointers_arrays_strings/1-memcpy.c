#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area @src 
 * to memory area @dest.
 * @dest: Memory area to copy @src into..
 * @src: Memory area to copy from.
 * @n: The number of bytes to copy from memory area @src.
 * 
 * Return: Pointer to @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

