#include "main.h"

/**
 * reverse_array - a function that  reverse array of integers.
 * @a: pointer to array.
 * @n: number of elements of array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
int i, j;

for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
