#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char);
#endif
