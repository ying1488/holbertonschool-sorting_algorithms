#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 *
 * @array: int
 * @size: size_t
 */

void selection_sort(int *array, size_t size)
{
	size_t currE, comI, minI;
	int temp;

	if(array == NULL || size < 2)
		return;

	for (currE = 0; currE < size -1; currE++)
	{
		// Assume the current position holds
        	// the minimum element
		minI = currE;
		// Iterate through the unsorted portion
        	// to find the actual minimum
		for (comI = currE + 1; comI < size; comI++)
		{
			if (array[comI] < array[minI])
			{
				// Update min_idx if a smaller element is found
				minI = comI;
			}
		}
		// Move minimum element to its
		// // correct position
		if (minI != currE)
		{
			temp = array[currE];
			array[currE] = array[minI];
			array[minI] = temp;

			print_array(array, size);
		}
	}

}
