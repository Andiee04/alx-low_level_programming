#include "main.h"

/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: value of int
 */
 
int *array_range(int min, int max)
{
	int x;
	int *g;
	int quantity;
    
    if (min > max)
		return (NULL);
	quantity = (max - min) + 1;
	g = malloc(quantity * sizeof(*g));
	if (g == NULL)
		return (NULL);
	for (x = 0; x < quantity && min <= max; x++, min++)
		*(g + x) = min;
	return (g);
}
