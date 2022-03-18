#include <math.h>
#include "holberton.h"

/**
 * addition - adds two complex numbers and stores the result in a struct node
 * @c1: the first complex number
 * @c2: the second complex number
 * @c3: pointer to the new struct node
 * Return: nothing
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
