#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers from given argumens
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on succes 1 when not
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
