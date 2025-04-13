#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/**
 * swap - functions to swap
 * @a: pointer to a
 * @b: pointer to b
 * Return: always
*/
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: int array
 * @size: size_t
 */


void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int swapped;

	if (array == NULL || size < 2)
		return;

	while (swapped == 0)
	{
		swapped = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				print_array(array, size);
				swapped = 0;
			}
		}
		len--;
	}
}
