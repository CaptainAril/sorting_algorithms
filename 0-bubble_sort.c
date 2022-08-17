#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: array to sort.
 * @size: size of @array.
 *
 * Description: Prints the array after each time two elements are swapped.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
