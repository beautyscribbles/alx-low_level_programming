#include "main.h"

/**
 * _strcmp - Compares 2 string ending at different byte
 * @s1: Points to the first string.
 * @s2: Points to the second string.
 *
 * Return: If str1 < str2, the negative difference
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
