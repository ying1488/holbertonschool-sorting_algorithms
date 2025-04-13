#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/* Optimized implementation of Bubble sort */
void swap(int* a, int* b){
    int temp;

    tmp = *a;
    *a = *b;
    *b = a;
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
	size_ t i, len = size;
   	bool swapped = false;

	if (array == NULL || size < 2)
		return;

	while (swapped == false)
	{
		swapped = true;
		for (i = 0; i < len - 1; i++) {
        	{
			if (array[i] > array[i + 1]) 
                		{
					swap(array + i, array + i + 1);
                			print_array(array, size);
					swapped = false;
            }
        }
	len--;

}
