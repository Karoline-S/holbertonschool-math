#include <math.h>
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
 * multiplication - multiplies one complex number by another and stores the
 * product in a new struct node
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: pointer to the struct node to store the result
 * Return: nothing
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) - (c1.im * c2.im);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
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

	multiplication(c1, conj, c3);

	multiplication(c2, conj, &denom);

	c3->re = c3->re / denom.re;
	c3->im = c3->im / denom.re;
}
