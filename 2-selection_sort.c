#include "sort.h"


/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algolrithm.
 * @array: the array to be sorted.
 * @size: size of @array.
 *
 * Description: Prints the array after each time two elements are swapped.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
