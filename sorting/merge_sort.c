/*
 * Merge sort - http://en.wikipedia.org/wiki/Merge_sort
 */
#include "sorts.h"

#define MAX 0x11111111

void merge(int *arr, int left, int middle, int right)
{
        int front_siz, back_siz;
        int *front_tmp, *back_tmp;
        int i, j, k;

        front_siz = middle - left + 1;
        back_siz = right - middle;

        if (!(front_tmp = malloc(sizeof(int) * (front_siz + 1))))
                exit(1);
        if (!(back_tmp = malloc(sizeof(int) * (back_siz + 1))))
                exit(1);

        for (i = left, j = 0; i <= middle; i++, j++)
                front_tmp[j] = arr[i];

        for (i = middle + 1, j = 0; i <= right; i++, j++)
                back_tmp[j] = arr[i];

        front_tmp[front_siz] = MAX;
        back_tmp[back_siz] = MAX;

        for (i = 0, j = 0, k = left; k <= right; k++) {
                if (front_tmp[i] <= back_tmp[j]) {
                        arr[k] = front_tmp[i];
                        i++;
                } else {
                        arr[k] = back_tmp[j];
                        j++;
                }
        }

        /* free the tmp memory */
        free(front_tmp);
        free(back_tmp);
}

void sorting(int *arr, int left, int right)
{
        int middle;

        if (right > left) {
                middle = (left + right) / 2;
                sorting(arr, left, middle);
                sorting(arr, middle + 1, right);
                merge(arr, left, middle, right);
        }
}

void merge_sort(int *arr, int siz)
{
        sorting(arr, 0, siz - 1);
}
