#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 *
 * Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
int i, z;

i = 0;
while (dest[i] != '\0')
{
i++;
}
for (z = 0; src[z] != '\0'; z++, i++)
{
dest[i] = src[z];
}
dest[i] = '\0';
return (dest);
}
