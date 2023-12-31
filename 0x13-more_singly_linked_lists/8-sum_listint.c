#include "lists.h"

/**
 * sum_listint - calculates all the data in a listed list
 * @head: first node in the listint_t list
 * Return: result
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;
while (temp)
{
	sum += temp->n;
	temp = temp->next;
}
return (sum);
}
