#ifndef HERON_H
#define HERON_H

/**
 * heron_list - a list holding the numbers of a heron sequence
 * @elt: the number in the sequene
 * @next: a pointer to the next element in the list
 */
typedef struct heron_list
{
	double elt;
	struct heron_list *next;
} t_cell;

t_cell *heron(double p, double x0);

#endif /* HERON_H */
