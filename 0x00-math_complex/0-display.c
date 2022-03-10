#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - display complex numbers
 * @c: pointer to struct complex
 * Return: nothing
 */
void display_complex_number(complex c)
{
	char op;

	if (c.re == 0)
	{
		printf("%.0f\n", c.im);
		return;
	}

	if (c.im == 0)
	{
		printf("%.0f\n", c.re);
		return;
	}

	if (c.im > 0)
		op = '+';
	else
		op = '-';

	printf("%.0f %c %.0fi\n", c.re, op, c.im);
}
