#include "main.h"

/**
 * *_strcpy - copies a function that copies the string pointed to by src
 * @dest: copy type string
 * @src: char type
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int l = 0;
int u = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; u < l ; u++)
{
dest[u] = src[u];
}
dest[l] = '\0';

return (dest);
}
