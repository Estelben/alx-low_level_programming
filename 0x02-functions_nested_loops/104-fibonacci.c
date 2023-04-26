#include <stdio.h>


/**
 * main - Prints the first fibonacci numbers, starting with
 * 1 and 2, seperated by a comma followed by space.
 * Return: Always 0
 */

int main(void)

{
unsigned long int i;
unsigned long int bet = 1;
unsigned long int aft = 2;
unsigned long int l = 1000000000;
unsigned long int bet1;
unsigned long int bef2;
unsigned long int aft1;
unsigned long int aft2;
printf("%lu", bef);
for (i = 1; i < 91; i++)
{
printf(", %lu", aft);
aft += bet;
bet = aft - bet;
}
bet1 = (bet / l);
bet2 = (bet % l);
aft1 = (aft / l);
aft2 = (aft % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
aft1 = aft1 + bet1;
bet1 = aft1 - bet1;
aft2 = aft2 + bet2;
bet2 = aft2 - bet2;
}
printf("\n");
return (0);
}

