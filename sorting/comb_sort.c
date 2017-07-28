/*
 * Comb sort - https://en.wikipedia.org/wiki/Combsort
 */

#include "sorts.h"

void comb_sort(int *arr, int siz)
{
        int tmp = 0;
        int gap = siz;
        int i;

        for (;;) {
                if (gap > 1)
                        gap = gap * 100 / 124;

                for (i = 0;;) {
                        if (arr[i] > arr[i + gap]) {
                                tmp = arr[i];
                                arr[i] = arr[i + gap];
                                arr[i + gap] = tmp;
                        }
                        i++;

                        if (i + gap >= siz)
                                break;
                }

                if (gap == 1)
                        break;

        }
}
