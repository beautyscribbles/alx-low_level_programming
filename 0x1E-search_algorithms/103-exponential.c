#include "search_algos.h"

/**
 * _binary_search - searches_for_the value_to_be_sorted
 * @array: array_of_integers
 * @left: left_of_element
 * @right: right_of_element
 * @value: value_to_search_for
 * Return: -1 if_not_found index_of_value
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
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
}


/**
 * exponential_search -searches_for_a value_in_a_sorted_array
 * @array: pointer_to_the_first_element_of the_array
 * @size: the_number_of elements_in_an_array
 * @value: the_value_to search_for
 * Return: index_of_the_value if_not_found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t  right;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}￼Enter
