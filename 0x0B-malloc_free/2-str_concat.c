#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *str_concat - Concatenates two strings.
 * a NULL string is treated as an empty string.
 * @s1: Pointer to string.
 * @s2: Pointer to string.
 *
 * Return: Pointer to newly allocated memory which
 * has s1, s2 and a null byte.
 * NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, size, i = 0, j = 0;
	char *nstr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s2[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/* check if malloc was successful */
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
