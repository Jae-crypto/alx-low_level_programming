#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_iterator - executes a functiongiven as parameter
 *@array: pointer array
 *@size: size of array
 *@action: pointer to a function
 *Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size <= 0 || action == NULL)
			return;
	
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
