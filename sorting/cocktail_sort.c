/*
 * Cocktail sort - https://en.wikipedia.org/wiki/Cocktail_sort
 */

#include "sorts.h"

void cocktail_sort(int *arr, int siz)
{
        int right, left;

        for (int i = 0; i < siz / 2; i++) {
                left = 0;
                right = siz - 1;

                while (left <= right) {
                        if (arr[left] > arr[left + 1])
                                swap(arr, left, left + 1);
                        left++;

                        if (arr[right - 1] > arr[right])
                                swap(arr, right - 1, right);
                        right--;
                }
        }
}
