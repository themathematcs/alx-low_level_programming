#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 * return:0 as succes
 */
int main(void)
{
char ch;
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
