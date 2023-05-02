#include "main.h"

/**
 * puts_half - a function that prints only half of a string
 * followed by a new line
 *
 * @str: input of string
 * Return: 0
 */
void puts_half(char *str)
{
int c, n, j;

j = 0;

for (c = 0; str[c] != '\0'; c++)
j++;

n = (j / 2);

if ((j % 2) == 1)
n = ((j + 1) / 2);

for (c = n; str[c] != '\0'; c++)
_putchar(str[c]);
_putchar('\n');
}
