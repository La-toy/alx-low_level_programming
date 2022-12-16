#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: String in which to locate needle.
 * @needle: Subtring to find in haystack.
 *
 * Return: Pointer to the beginning of the located substring
 * NULL if no substring is found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
