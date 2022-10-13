#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

void print(char *name, void(*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int (*cmp)(int));

#endif
