#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array:  Array of number to sort.
 * @size: Size of the array.
 * Return: Void.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, swap;

	if (size < 2)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size -1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
