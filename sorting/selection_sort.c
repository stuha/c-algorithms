/*
 * Selection sort - http://en.wikipedia.org/wiki/Selection_sort
 */
#include "sorts.h"

void selection_sort(int *arr, int siz)
{
        int min = 0;

        for (int i = 0; i < siz; i++) {
                min = i;
                for (int j = i + 1; j < siz; j++)
                        if (arr[j] < arr[min])
                                min = j;

                swap(arr, i, min);
        }

}
