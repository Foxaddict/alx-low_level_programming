#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes in a listed list
 * @head: A pointer to the head of the listint_t to check.
 * Return:Always success
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *light, *dark;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
	light = head->next;
	dark = (head->next)->next;
while (dark)
{
if (light == dark)
{
	light = dark;
while (light != dark)
{
	nodes++;
	light = light->next;
	dark = dark->next;
}
	light = light->next;
while (light != dark)
{
nodes++;
	light = light->next;
}
return (nodes);
}
	light = light->next;
	dark = (dark->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely
 * @head: pointes to the head of the listed list
 * Return:Always Success
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
}
	printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
