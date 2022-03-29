#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "fibonacci.h"

#define RATIO ((1 + sqrt(5)) / 2)

/**
 * add_nodeint - adds a new node at the beginning of a t_cell list
 * @head: a pointer to a pointer to the start of the list
 * @n: the unsigned int to be inserted in the new node
 * Return: nothing
 */
void add_nodeint(t_cell **head, unsigned int n)
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
 * gold_number - calcuates the ratio whether the fibonacci sequence numbers
 * in a linked list have reached the golden ratio
 * @head: pointer to the start of the list
 * Return: the ratio found
 */
double gold_number(t_cell *head)
{
	double x, y;

	while (head != NULL)
	{
		x = (double) head->elt;
		head = head->next;

		if (head == NULL)
			break;

		y = (double) head->elt;

		if  (x / y < 1.618033989 && x / y > 1.6180339)
			return (RATIO);
	}

	return (0);
}

/**
 * Fibonnaci - generates the fibonacci sequence to the golden number
 * and stores it in a singly linked list
 *
 * Return: a pointer to the start of the list
 */
t_cell *Fibonnaci()
{
	t_cell *head = NULL;
	unsigned int a = 1;
	unsigned int b = 1;
	double stop = 0;

	add_nodeint(&head, 1);
	add_nodeint(&head, 1);

	while (stop != RATIO && a < 50000)
	{
		a = a + b;
		add_nodeint(&head, a);
		b = a - b;
		stop = gold_number(head);
	}

	return (head);
}
