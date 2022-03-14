#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - display complex numbers
 * @c: pointer to struct complex
 * Return: nothing
 */

void display_complex_number(complex c)
{
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

	if ((c.re > 0 && c.im > 0) || (c.re < 0 && c.im < 0))
		printf("%.0f + %.0fi\n", c.re, c.im);

	else
		printf("%.0f - %.0fi\n", c.re, c.im);
}
