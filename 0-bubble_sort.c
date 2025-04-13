#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
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
	size_t i, pass, k;
	int temp, swap;

	if (array == NULL || size < 2)
		return;

	for (pass = 0; pass < size - 1; pass++)
	{
		swap = 0;
		for (i = 0; i < size - pass - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;


			for (k = 0; k < size; k++)
			{
				printf("%d", array[k]);
				if (k < size - 1)
					printf(", ");

			}
			printf("\n");
			swap = 1;
			}

		}
	if (!swap)
		break;
	}
}
