#ifndef FIBONACCI_H
#define FIBONACCI_H

/**
 * fibonacci_list - a singly linked list holding numbers of the
 * fibonacci sequence
 * @fib: the sequence number to be stored
 * @next: pointer to the next node in the list
 */
typedef struct fibonacci_list
{
	unsigned int elt;
	struct fibonacci_list *next;
} t_cell;

t_cell *Fibonnaci();
double gold_number(t_cell *head);

#endif /* FIBONACCI_H */
