/*
 * File: 4-free_listint.c
 * Auth: Rise Code Sleep
 */

#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of a list
 *
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
