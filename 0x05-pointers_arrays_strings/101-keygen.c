#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int pass[100];
int u, sum, n;

sum = 0;

srand(time(NULL));

for (u = 0; u < 100; u++)
{
pass[u] = rand() % 78;
sum += (pass[u] + '0');
putchar(pass[u] + '0');
if ((2772 - sum) -'0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}

return (0);
}
