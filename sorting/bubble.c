/*
 * Bubble sort - http://en.wikipedia.org/wiki/Bubble_sort
 */

#include "sorts.h"

void bubble_sort(int *arr, int siz)
{
        int i, j;

        for (i = 0; i < siz; i++)
                for (j = 0; j < siz - 1; j++)
                        if (arr[j] > arr[j + 1])
                                swap(arr, j, j + 1);
}
