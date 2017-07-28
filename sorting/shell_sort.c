/*
 * Shell sort - http://en.wikipedia.org/wiki/Shellsort
 */

#include "sorts.h"

void shell_sort(int *arr, int siz)
{
        for (int d = siz; d > 0; d /= 2)
                for (int i = d; i < siz; i++)
                        for (int j = i; j >= d && arr[j - d] > arr[j]; j -= d)
                                swap(arr, j, j - d);
}
