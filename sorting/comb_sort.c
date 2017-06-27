/*
 * Comb sort - https://en.wikipedia.org/wiki/Combsort
 */

#include <stdio.h>

#define A_NUM 6

int
main(void)
{
        int arr[A_NUM] = {9, 6, 1, 5, 7, 4};
        int tmp = 0;
        int gap = A_NUM;
        int i;

        printf("original: ");
        for (i = 0; i < A_NUM; i++) {
                printf("%d ", arr[i]);
        }
        printf("\n");

        for (;;) {
                if (gap > 1)
                        gap = gap * 100 / 124;

                for (i = 0;;) {
                        if (arr[i] > arr[i+gap]) {
                                tmp = arr[i];
                                arr[i] = arr[i+gap];
                                arr[i+gap] = tmp;
                        }
                        i++;

                        if (i + gap >= A_NUM)
                                break;
                }

                if (gap == 1)
                        break;

        }

        printf("sorted: ");
        for (i = 0; i < A_NUM; i++) {
                printf("%d ", arr[i]);
        }
        printf("\n");
}
