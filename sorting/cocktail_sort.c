/*
 * Cocktail sort - https://en.wikipedia.org/wiki/Cocktail_sort
 */

#include <stdio.h>

#define A_NUM 6

int
main(void)
{
        int arr[A_NUM] = {9, 2, 7, 8, 5, 1};
        int tmp = 0;
        int i, j, left, right;

        printf("original: ");
        for (j = 0; j < A_NUM; j++)
                printf("%d ", arr[j]);
        printf("\n");

        for (i = 0; i < A_NUM / 2; i++) {
                left = 0;
                right = A_NUM - 1;

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

        printf("sorted: ");
        for (j = 0; j < A_NUM; j++)
                printf("%d ", arr[j]);
        printf("\n");
}
