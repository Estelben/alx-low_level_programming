#include "main.h"
/**
 * _strncat - concatenate two strings.
 * using at most n bytes from src.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * @n: number of bytes to be concatenated.
 *
 * Return: pointer to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
int i, z;

i = 0;
while (dest[i] != '\0')
{
i++;
}
for (z = 0; z < n && src[z] != '\0'; z++, i++)
{
dest[i] = src[z];
}
dest[i] = '\0';
return (dest);
}
