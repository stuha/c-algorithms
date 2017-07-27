/*
 * utils.h
 */
#ifndef __UTILS_H

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int *rand_array(int, int);
int *zero_array(int);
void print_array(int *, int);
void sort_test2(void (*sort_func)(int *, int), int, int);
void sort_test(void (*sort_func)(int *, int));

#endif
