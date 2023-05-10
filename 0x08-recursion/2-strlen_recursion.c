#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string.
 * @s: string parameters
 *
 * Return: length of the string.
 */

int _strlen_recursion(char *s)
{
int pull = 0;

if (*s)
{
pull++;
pull += _strlen_recursion(s + 1);
}
return (pull);
}
