#include <stdio.h>
/**
 * main -> find and prints the first 98 Fibonacci numbers ,
 * starting with 1 and 2
 * Return: 0
 */
int main(void)
{
unsigned long int i, j, k, ji, j2 k1, k2;
j = 1;
k = 2;
printf("%lu", j);
for (i = 1; i < 91; i++)
{
k = k + j;
j = k - j;
}
j1 = j / 1000000000;
j2 = j % 1000000000;
k1 = k / 1000000000;
k2 = k % 1000000000;

for (i = 92; i < 99; ++i)
{
printf(", %lu", k1 + (k2 / 1000000000));
printf("%lu", k2 % 1000000000);
}
printf("\n");
return (0);
}
