#include "search_algos.h"


/**
 * advanced_binary_recursive - performs_recursive_binary_search
 * @array: pointer_to_the_first_element
 * @right: starting_index
 * @left: ending_index
 * @value: value_to_search_for
 * Return: -1 || index_where_value_is_located
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, left, i, value));
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - searches_a_value in_a sorted_array_of_intergers
 * @array: pointer_to_the first_element of_the_array
 * @size: number_of_elements_in_array
 * @value: value_to_search_for
 * Return: value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}￼Enter
