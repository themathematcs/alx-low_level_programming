#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Return:0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is %d ", n, n % 98);
if (n % 98 > 5)
printf("and is greater than 5\n");
else if (n % 98 == 0)
printf("and is 0\n");
else if (n % 98 < 6 && n % 98 != 0)
printf("and is less than 6 and not 0\n");
return (0);
}
