#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>

char *_strcat(char *dest, char *src, unsigned int n) 
void *malloc_checked(unsigned int);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
