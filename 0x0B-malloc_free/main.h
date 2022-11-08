#ifndef HEADER_H
#define HEADER_H
#define NULL ((char *)0)
#include <stdlib.h>
	int _putchar(char);
	char *create_array(unsigned int, char);
	char *_strdup(char *);
	char *str_concat(char *, char *);
	int **alloc_grid(int, int);
	void free_grid(int **, int);
	char *argstostr(int, char **);
	char **strtow(char *);
#endif
