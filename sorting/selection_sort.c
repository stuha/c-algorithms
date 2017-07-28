/*
 * Selection sort - http://en.wikipedia.org/wiki/Selection_sort
 */

void selection_sort(int *arr, int siz)
{
        int min = 0;
        int tmp = 0;

        for (int i = 0; i < siz; i++) {
                min = i;
                for (int j = i + 1; j < siz; j++) {
                        if (arr[j] < arr[min]) {
                                min = j;
                        }
                }

                tmp = arr[i];
                arr[i] = arr[min];
                arr[min] = tmp;
        }

}
