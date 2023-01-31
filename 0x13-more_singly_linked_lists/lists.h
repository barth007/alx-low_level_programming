#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 *struct node - a user defined data containing a data and next node
 *@n: element of the struct of datatype int
 *@next: this is the next node to point to
**/
typedef struct node
{
	int n;
	struct node *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
