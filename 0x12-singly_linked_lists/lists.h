#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct node - it's a user define struct
 * @str: pointer char
 * @len: lenght to char
 * @next: next node
**/
typedef struct node
{
	char *str;
	size_t len;
	struct node *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
