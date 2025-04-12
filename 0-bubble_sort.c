#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 *
 * @array: int array
 * @size: size_t
 */


void bubble_sort(int *array, size_t size)
{
	int i, j;
   	bool swapped;
    	for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        /* If no two elements were swapped by inner loop,*/
        /* then break*/
        if (swapped == false)
            break;
    }
}
