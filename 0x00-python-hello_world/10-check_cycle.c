#include "lists.h"

/**
 * check_cycle - checks if linked list contain cycle
 * @list: linked list to check the lists
 *
 * Return: 1 if the list has cycle,and 0 if it doesn't have
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
