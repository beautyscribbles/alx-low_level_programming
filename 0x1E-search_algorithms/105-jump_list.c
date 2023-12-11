#include "search_algos.h"

/**
 * jump_list - Searches_for_a_value in_a_sorted list_using_Jump_search.
 * @list: Pointer_to_the_head of_the_list.
 * @size: Number_of_nodes_in_the_list.
 * @value: The_value_to_search_for.
 *
 * Return: A pointer_to_the_first_node where_the_value is_located,_or NULL if
 * the_value is_not_found or_if the_list_is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
