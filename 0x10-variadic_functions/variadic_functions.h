#ifndef HEADER_H
#define HEADER_H
#include "stdarg.h"
#include <stdio.h>
#include <stdlib.h>
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char);
#endif
