#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_search_rec(int *array, int value, size_t l, size_t r);

#endif
