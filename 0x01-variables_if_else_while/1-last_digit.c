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
printf("last digit of %d is %d ", n, n % 100);
if (n % 100 > 5)
printf("and is greater than 5\n");
else if (n % 100 == 0)
printf("and is 0\n");
else if (n % 100 < 6 && n % 100 != 0)
printf("and is less than 6 and not 0\n");
return (0);
}
