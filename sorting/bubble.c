/*
 * Bubble sort - http://en.wikipedia.org/wiki/Bubble_sort
 */

#include <stdio.h>

#define A_NUM 6

int
main(void)
{
        int arr[A_NUM] = {1, 3, 0, 2, 4, 8};
        int tmp;
        int i, j, k;

        printf("original: ");
        for (k = 0; k < A_NUM; k++)
                printf("%d ", arr[k]);
        printf("\n");

        for (i = 0; i < A_NUM; i ++) {
                for (j = 0; j < A_NUM - 1; j++) {
                        if (arr[j] > arr[j+1] ) {
                                tmp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = tmp;
                        }
                }
        }

        printf("sorted: ");
        for (k = 0; k < A_NUM; k++)
                printf("%d ", arr[k]);
        printf("\n");
}
