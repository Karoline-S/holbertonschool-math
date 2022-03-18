#include <math.h>
#include "holberton.h"

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
