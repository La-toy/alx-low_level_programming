#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL
 * if not than a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr, i = 0, t = max;

	if (min > max)
		return (0);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (i <= max - min)
		arr[i] = t++;

	return (arr);
}
