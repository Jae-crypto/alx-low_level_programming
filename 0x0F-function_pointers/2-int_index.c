#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to an array
 * @size: numbebr of elements in the array
 * @cmp: address to a function
 * Return: returns an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);

	int i;

	int v;

	for (i = 0; array[i] <= size; i++)
	{
		v = (*cmp)(array[i]);

		if (v != 0)
		{
		return (i);
		}
	}
	return (-1);

}
