#include "sort.h"


void swap_node(listint_t *n1, listint_t *n2);
/**
 * insertion_sort_list -  sorts a list using the Insertion sort algorithm
 * @list: pointer to the list bieng sorted
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *current, *previous, *tmp;

	head = *list;
	head = head->next;

	/* head tracks the elements (starting from second element)*/
	while (head != NULL)
	{
		/* compare current element(current) to previous(head)*/
		previous = head->prev;
		current = head;
		/* as long as current element is less than previous element*/
		/* swap, move back and compare current(now moved back)*/
		/* to its previous element*/
		while (current->n < previous->n)
		{
			swap_node(previous, current);
			/* !!! since current and previous are swapped, we need to fix that */
			tmp = current;
			current = previous;
			previous  = tmp;

			/* after swap if current is the first node, start the list there */
			if (previous->prev == NULL)
			{
				*list = previous;
				break;
			}
			/* printf("curr=%i prev=%i\n", current->n, previous->n);*/
			/* walk a step back */
			current = current->prev;
			previous = current->prev;
			print_list(*list);

		}
		head = head->next;
	}
}

/**
 * swap_node - swaps two nodes in adoubly linked list
 * @n1: first node
 * @n2: second node
 * Return: nonw
 */
void swap_node(listint_t *n1, listint_t *n2)
{
	listint_t *current, *previous, *p = NULL, *n = NULL;

	previous = n1;
	current = n2;
	/* swap the two nodes*/
	/* p -- previous -- current -- n */
	p = previous->prev;
	n = current->next;

	current->next = previous;
	current->prev = p;
	previous->prev = current;
	previous->next = n;

	if (p)
		p->next = current;
	if (n)
		n->prev = previous;
}
