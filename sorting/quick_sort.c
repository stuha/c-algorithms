/*
 * Quick sort - https://en.wikipedia.org/wiki/Quicksort
 */

void swap(int *arr, int pos1, int pos2)
{
        int tmp;

        tmp = arr[pos1];
        arr[pos1] = arr[pos2];
        arr[pos2] = tmp;
}

void quick_sort(int *arr, int siz)
{
        if (siz > 1) {
                int pivot = 0;
                int i;

                for (i = 1; i < siz; i++)
                        if (arr[i] < arr[0])
                                swap(arr, ++pivot, i);
                swap(arr, 0, pivot);

                quick_sort(arr, pivot);
                quick_sort(arr + pivot + 1, siz - pivot - 1);
        }

}
