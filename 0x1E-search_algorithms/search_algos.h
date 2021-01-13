#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
void print_array(int low, int high, int *array);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif
