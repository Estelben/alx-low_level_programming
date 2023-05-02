#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array
 * @a: the input array name
 * @n: the length of array to be printed
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
