#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - display complex numbers
 * @c: pointer to struct complex
 * Return: nothing
 */

void display_complex_number(complex c)
{
	if (c.real == 0)
	{
		printf("%.0f\n", c.imag);
		return;
	}

	if (c.imag == 0)
	{
		printf("%.0f\n", c.real);
		return;
	}

	printf("%.0f + %.0fi\n", c.real, c.imag);
}
