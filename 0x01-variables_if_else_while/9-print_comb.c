#include <stdio.h>
/**
 * main -main entry point
 * Return:0
 */
int main(void)
{
int n;
for (n = 37; n < 47; n++)
{
putchar(n);
if (n != 47)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
