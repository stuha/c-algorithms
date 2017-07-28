/*
 * Comb sort - https://en.wikipedia.org/wiki/Combsort
 */

#include "sorts.h"

void comb_sort(int *arr, int siz)
{
        int gap = siz;
        int i;

        for (;;) {
                if (gap > 1)
                        gap = gap * 100 / 124;

                for (i = 0;;) {
                        if (arr[i] > arr[i + gap])
                                swap(arr, i, i + gap);
                        i++;

                        if (i + gap >= siz)
                                break;
                }

                if (gap == 1)
                        break;

        }
}
