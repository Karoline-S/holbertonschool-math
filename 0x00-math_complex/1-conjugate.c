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
