#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: the used string reference
 * Return: 0
 */

void puts2(char *str)
{
int i;
int u = 0;

while (str[u] != '\0')
{
u++;
}

for (i = 0; i < u; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
