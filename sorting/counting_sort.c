/*
 * Counting sort - https://en.wikipedia.org/wiki/Counting_sort
 */

#include "sorts.h"

int getK(int *arr, int siz)
{
        int k;

        if (siz == 0)
                return 1;

        k = arr[0];

        for(int i = 0; i < siz; i++) {
                int v = arr[i];
                if (v > k)
                        k = v;
        }

        return (k + 1);
}

void counting_sort(int *arr, int siz)
{
        int k;
        int i, j;
        int *array_of_counts;

        k = getK(arr, siz);
        array_of_counts = zero_array(k);

        for (i = 0; i < siz; i++)
                array_of_counts[arr[i]] += 1;

        for (i = j = 0; i < k; i++) {
                while(1) {
                        if (array_of_counts[i] > 0) {
                                arr[j] = i;
                                j += 1;
                                array_of_counts[i] -= 1;
                                continue;
                        }
                        break;
                }
        }

        free(array_of_counts);
}
