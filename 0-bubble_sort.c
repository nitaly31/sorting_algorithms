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
	size_t i, j;
	int swap, flag = 0;

	if (size <= 1)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
	}
}
