#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5};
    int *p = a;

    *(p + 2) = 98; /* Add your line here */

    printf("a[0] = %d, a[1] = %d, a[2] = %d, a[3] = %d, a[4] = %d, a[5] = %d\n",
           a[0], a[1], a[2], a[3], a[4], a[5]);
    return (0);
}
