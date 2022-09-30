#include "main.h"
#include <stdio.h>
/**
 * main -> prints name of the program
 * @_attribute_((unused)): hundles error of unused
 * @argv: array of args
 * @argc: number of args
 *
 * Return: 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
