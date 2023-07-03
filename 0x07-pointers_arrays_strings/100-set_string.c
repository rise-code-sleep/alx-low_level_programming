/*
 * File: 100-set_string.c
 * Author: Rise Code Sleep
 */

#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: source adress.
 * @to: target adress.
 * Return: no return.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

