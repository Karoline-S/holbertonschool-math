#include <stdlib.h>
#include "heron.h"

#define LIMIT 0.0000001

/**
 * heron_calc - calculates the next number in a heron sequence
 * @Un: the previous number in the sequence
 * @num: the fixed numerator in the equation
 * Return: the result as a double
 */
double heron_calc(double Un, double num)
{
	return ((Un + (num / Un)) * 0.5);
}

/**
 * add_nodedouble - adds a new node at the beginning of a t_cell list
 * @head: a pointer to a pointer to the start of the list
 * @n: the double to be inserted in the new node
 * Return: address of the new element
 */
void add_nodedouble(t_cell **head, double n)
{
	t_cell *new;

	if (head == NULL)
		return;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return;

	new->elt = n;
	new->next = *head;
	*head = new;
}

/**
 * heron - records members of the Heron sequence in a linked list. Range:
 * 1 until having convergence with an error less or equal to 10 to the power
 * of -7.
 * @p: not sure
 * @x0: not sure
 * Return; Heron sequence
 */
t_cell *heron(double p, double x0)
{
	t_cell *head;

	head = NULL;

	add_nodedouble(&head, x0);

	if (head == NULL)
		return (NULL);

	while (x0 == 1 || x0 - heron_calc(x0, p) >= LIMIT)
	{
		x0 = heron_calc(x0, p);
		add_nodedouble(&head, x0);
	}

	return (head);
}
