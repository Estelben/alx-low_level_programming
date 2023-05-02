#include "stdio.h"

/**
 * _strlen - returns the length of a string.
 * @str: the string to get the length.
 * Return: length of @string
 */
size_t _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}
