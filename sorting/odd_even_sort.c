/*
 * Odd-Even sort - https://en.wikipedia.org/wiki/Odd-even_sort
 */

#include "sorts.h"

void odd_even_sort(int *arr, int siz)
{
        int i;
        int is_sorted = FALSE;

        while (is_sorted == FALSE) {
                is_sorted = TRUE;
                for (i = 1; i < siz - 1; i = i + 2)
                        if (arr[i] > arr[i + 1]) {
                                swap(arr, i, i + 1);

                                is_sorted = FALSE;
                        }

                for (i = 0; i < siz - 1; i = i + 2)
                        if (arr[i] > arr[i + 1]) {
                                swap(arr, i, i + 1);

                                is_sorted = FALSE;
                        }
        }
}
