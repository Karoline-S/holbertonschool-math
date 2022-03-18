#include <math.h>
#include "holberton.h"

/**
 * substraction - substracts one complex number from another and stores the
 * result in a new struct node
 * @c1: the complex number to be subtracted from
 * @c2: the complex number to subtract
 * @c3: pointer to the struct node to store the result
 * Return: nothing
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
