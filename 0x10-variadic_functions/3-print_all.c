#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * * print_all - prints anything
 * * @format: list of types of arguments
 * *c: prints char
 * *i: prints integer
 * *s: prints string
 * *f: prints float
 * */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, c = 0;
	char *v;

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
