#include <math.h>
#include "holberton.h"

/**
 * modulus - returns the modulus of a complex number
 * @c: the complex number
 * Return: modulus of c as a double
 */
double modulus(complex c)
{
	double result;

	result = pow(c.re, 2) + pow(c.im, 2);

	return (sqrt(result));
}
