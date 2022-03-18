#include <math.h>
#include <stdio.h>
#include "holberton.h"

#define PI 3.14159265359

/**
 * argument - finds the argument of a complex number
 * @c: the complex number
 * Return: the argument of c as a double
 */
double argument(complex c)
{
	double theta = 0;

	if (c.re == 0 || c.im == 0)
		return (0);

	if (c.re > 0 && c.im > 0) /* both real and imag are positive */
	{
		theta = atan(c.im / c.re);
		return (theta);
	}

	if (c.re < 0 && c.im < 0) /* both real and imag are negative */
	{
		theta = atan(c.im / c.re);
		theta = (PI - theta) * -1;
		return (theta);
	}

	if (c.re < 0) /* only real is neg */
	{
		theta = atan(c.im / (c.re * -1));
		theta = PI - theta;
		return (theta);
	}

	if (c.im < 0) /* only imag is neg */
	{
		theta = atan(c.im / c.re);
		theta = theta * -1;
	}

	return (theta);
}
