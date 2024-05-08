#include "sort.h"


/**
 * insertion_sort_list -  sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
 * @list: pointer to the list bieng sorted
 * Return: none
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *current, *previous;
	int num;

	head = *list;
	head = head->next;

	/* head tracks the elements (starting from second element)*/
	while (head)
	{
		/* compare current element(current) to previous(head)*/
		previous = head->prev;
		current = head;
		/* as long as current element is less than previous element*/
		/* swap, move back and compare current(now moved back)*/
		/* to its previous element*/
		while (current->n < previous->n)
		{
			/* swap just the value n of the node*/
			num = current->n;
			current->n = previous->n;
			previous->n = num;
			/**/
			previous = current->prev;
		}
		head = head->next;
	}
}
