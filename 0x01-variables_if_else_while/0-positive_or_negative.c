#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main block*/

/*return 0*/
int main(void)
{
int n;
srand(time(0));
n = rands() - RAND_MAX / 2;
if (n > 0)
print("%d is positive\n", n);
else if (n == 0)
print("%d is zero\n", n);
else if (n  < 0)
print("%d is negative\n", n);
return (0);	
