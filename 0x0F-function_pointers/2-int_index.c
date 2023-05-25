#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches content of sn integer
 * @array: pointer array
 * @size: number elements in array
 * @cmp: points to the function used to compare values
 * Return: first element index,on succes or return -1
 **/
 
int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (v = 0; v < size; v++)
	{
		if (cmp(array[v]))
			return (v);
	}
	return (-1);
}
