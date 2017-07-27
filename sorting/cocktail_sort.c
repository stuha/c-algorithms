/*
 * Cocktail sort - https://en.wikipedia.org/wiki/Cocktail_sort
 */

#include "sorts.h"

void cocktail_sort(int *arr, int siz)
{
        int right, left, tmp;

        for (int i = 0; i < siz / 2; i++) {
                left = 0;
                right = siz - 1;

                for (; left <= right;) {
                        if (arr[left] > arr[left+1]) {
                                tmp = arr[left];
                                arr[left] = arr[left+1];
                                arr[left+1] = tmp;
                        }
                        left++;

                        if (arr[right-1] > arr[right]) {
                                tmp = arr[right-1];
                                arr[right-1] = arr[right];
                                arr[right] = tmp;
                        }
                        right--;
                }
        }
}
