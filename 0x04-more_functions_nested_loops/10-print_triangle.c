#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * Description:i prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int lines, spaces, hashes;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (lines = 1; lines <= size; lines++)
{
for (hashes = size - lines; hashes >= 1; hashes--)
{
_putchar(' ');
}
for (spaces = 1; spaces <= lines; spaces++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
