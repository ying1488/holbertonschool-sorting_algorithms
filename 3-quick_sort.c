#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sort.h"

/**
 *lomuto_partition - lomuto partition sorting method
 *@array: array
 *@lower: lower
 *@higher: higher
 *@size: size of array
 *Return: nothing
 */

int lomuto_partition(int *array, int lower, int higher, size_t size)
{
	int i = 0, j = 0, pivot = 0, aux = 0;

	pivot = array[higher];
	i = lower;

	for (j = lower; j < higher; j++)
	{
		if (array[j] < pivot)
		{
			aux = array[i];
			array[i] = array[j];
			array[j] = aux;

			if (aux != array[i])
				print_array(array, size);
			i++;
		}


	}

	aux = array[i];
	array[i] = array[higher];
	array[higher] = aux;

	if (aux != array[i])
		print_array(array, size);

	return (i);
}
/**
 *quick_sort_rec - runs quick sort recursively
 *@array : array
 *@lower: lower
 *@higher: higher
 *@size: size
 */

void quick_sort_rec(int *array, int lower, int higher, size_t size)
{
        int l_p = 0;

        if (lower < higher)
        {
                l_p = lomuto_partition(array, lower, higher, size);
                quick_sort_rec(array, lower, l_p - 1, size);
                quick_sort_rec(array, l_p + 1, higher, size);
        }
}
/**
 *quick_sort -  function that sorts an array of integers
 *in ascending order using the Quick sort algorithm
 *@array: array
 *@size: size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick_sort_rec(array, 0, size - 1, size);
}
    



