#include "main.h"
#include <stdio.h>
/**
 * main - prints all args
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0 when succesfull
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
