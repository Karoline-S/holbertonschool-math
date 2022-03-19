#include "holberton.h"
#include <stdio.h>

/**
 * print_real_part - prints the real part of complex number
 * @re: the real part
 * Return: nothing
 */
void print_real_part(double re)
{
	if (re - (int)re == 0)
		printf("%.0f", re);
	else
		printf("%.1f", re);
}

void print_imaginary_part(double im)
{
	if (im == 0)
		return;

	if (im < 0)
	{
		im = im * -1;
		printf("- ");
	}
	else
	{
		printf("+ ");
	}

	if (im == 1)
		printf("i");
	else
	{
		if (im - (int)im == 0)
			printf("%.0fi", im);
		else
			printf("%.1fi", im);
	}
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

	printf(" ");

	print_imaginary_part(c.im);
	printf("\n");
}
