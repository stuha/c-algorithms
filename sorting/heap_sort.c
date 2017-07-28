/*
 * Heap sort - https://en.wikipedia.org/wiki/Heapsort
 */

/*
 * It's a wrong case!
 */

#include "sorts.h"

void sift(int *arr, int idx, int siz)
{
        int min;

        while (idx * 2 + 1 < siz) {
                min = idx * 2 + 1;
                if (idx * 2 + 2 < siz)
                        if (arr[min] < arr[idx * 2 + 2])
                                min = idx * 2 + 2;

                if (arr[idx] > arr[min]) {
                        break;
                } else {
                        swap(arr, idx, min);
                        idx = min;
                }
        }
}

void build_heap(int *arr, int siz)
{
        for (int i = siz / 2 - 1; i >= 0; i--)
                sift(arr, i, siz);
}

void heap_sort(int *arr, int siz)
{
        int i = 0;

        build_heap(arr, siz);

        for (i = siz - 1; i >= 1; i--) {
                swap(arr, 0, i);
                siz--;
                sift(arr, 0, siz);
        }
}
