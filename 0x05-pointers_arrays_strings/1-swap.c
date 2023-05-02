#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: First integer to swap
 * @b: Second integer to swap
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
