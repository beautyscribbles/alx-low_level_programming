#include "search_algos.h"

/**
 * linear_search - searches_for_a value_in an_array
 * @array: pointer_to the_first element_of the_array
 * @size: number_of_elements_in_an_array
 * @value: value_to_search_for
 * Return: index_of_value if_not_found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Check_if_the input_array_is NULL */
	if (array == NULL)
		return (-1);

	/* iterate_through the_array */
	for (i = 0; i < size; i++)
	{
		/* print_the_comparison_being_made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* if_value_is found_return the_index */
		if (array[i] == value)
			return (i);
	}
	/* Value_not_found in_the_array */
	return (-1);
}￼Enter
