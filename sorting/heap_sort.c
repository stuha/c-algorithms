/*
 * Heap sort - https://en.wikipedia.org/wiki/Heapsort
 */

/*
 * It's a wrong case!
 */

#include "sorts.h"

int *sift(int *arr, int i, int siz)
{
        int done = FALSE;
        int tmp = 0;
        int max_child = 0;

        while ((i * 2 + 1) < siz && !done) {
                if ((i * 2 + 1) == (siz - 1))
                        max_child = i * 2 + 1;
                else if (arr[i*2+1] > arr[i+2+2])
                        max_child = i * 2 + 1;
                else
                        max_child = i * 2 + 2;

                if (arr[i] < arr[max_child]) {
                        tmp = arr[i];
                        arr[i] = arr[max_child];
                        arr[max_child] = tmp;
                        i = max_child;
                } else {
                        done = TRUE;
                }
        }

        return arr;
}

void heap_sort(int *arr, int siz)
{
        int i = 0;
        int tmp = 0;

        for (i = siz / 2 - 1; i >= 0; i--)
                arr = sift(arr, i, siz);

        for (i = siz - 1; i >= 1; i--) {
                tmp = arr[0];
                arr[0] = arr[i];
                arr[i] = tmp;
                arr = sift(arr, 0, i);
        }
}
