#include "search_algos.h"

/**
 * binary_search - searches_for a_value in_a_sorted_array
 * @array: pointer_to the_first element_of the_array
 * @size: number_of_elements in_the_array
 * @value: value_to_search_for
 * Return: -1 if_not found_index of_value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, right, left;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}￼Enter
