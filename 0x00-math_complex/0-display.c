#include "holberton.h"
#include <stdio.h>

void print_real_part(double re)
{
	if (re == 0)
		return;

	printf("%.0f", re);
}


void print_imaginary_part(double im, double re)
{
	if (im == 0)
		return;

	if (im < 0)
	{
		im = im * -1;

		if (re == 0)
			printf("-");
		else
			printf("- ");
	}
	else if (re != 0)
	{
		printf("+ ");
	}

	if (im == 1)
		printf("i");
	else
		printf("%.0fi", im);
}

/**
 * display_complex_number - display complex numbers
 * @c: pointer to struct complex
 * Return: nothing
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
	{
		printf("0\n");
		return;
	}

	print_real_part(c.re);

	if (c.re != 0)
		printf(" ");

	print_imaginary_part(c.im, c.re);
	printf("\n");
}
