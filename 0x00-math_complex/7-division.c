#include <math.h>
#include <stdio.h>
#include "holberton.h"

/**
 * conjugate - returns the conjugate of a given complex number
 * @c: pointer to a structure
 * Return: pointer to structure?
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;

	return (c);
}

/**
 * division - divides one complex number by another and stores the
 * product in a new struct node
 * @c1: the first complex number (to be divided)
 * @c2: the second complex number (to divide by)
 * @c3: pointer to the struct node to store the result
 * Return: nothing
 */
void division(complex c1, complex c2, complex *c3)
{
	complex denom, conj;

	conj.re = c2.re;
	conj.im = c2.im;
	conj = conjugate(conj);
	display_complex_number(conj);

	multiplication(c1, conj, c3);
	display_complex_number(*c3);
	multiplication(c2, conj, &denom);
	display_complex_number(denom);

	c3->re = c3->re / denom.re;
	c3->im = c3->im / denom.re;
}
