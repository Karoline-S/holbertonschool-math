#include <stdio.h>
#include <math.h>
#include "holberton.h"

#define PI 3.14159265359

/**
 * complex_from_mod_arg - computes the real and imaginary parts
 * of a complex number from the modulus and argument
 * @m: the modulus of the complex number
 * @arg: the argument of the complex number
 * @c3: a pointer to the struct node to be updated
 * Return: nothing
 */
void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
