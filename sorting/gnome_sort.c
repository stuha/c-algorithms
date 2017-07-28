/*
 * Gnome sort - https://en.wikipedia.org/wiki/Gnome_sort
 */

#include "sorts.h"

void gnome_sort(int *arr, int siz)
{
        int i = 1;

        while (i < siz) {
                if (arr[i] >= arr[i - 1]) {
                        i++;
                } else {
                        swap(arr, i, i - 1);

                        if (i > 1)
                                i--;
                }
        }
}
