/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: It is a pointer to the array of integers.
 * @n: It is the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
        int i, temp;

        for (i = 0; i < n / 2; i++)
        {
                temp = a[i];
                a[i] = a[n - 1 - i];
                a[n - 1 - i] = temp;
        }
}
