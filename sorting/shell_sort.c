/*
 * Shell sort - http://en.wikipedia.org/wiki/Shellsort
 */

void shell_sort(int *arr, int siz)
{
        int tmp;

        for (int d = siz; d > 0; d /= 2) {
                for (int i = d; i < siz; i++) {
                        for (int j = i; j >= d && arr[j - d] > arr[j]; j -= d) {
                                tmp = arr[j];
                                arr[j] = arr[j - d];
                                arr[j - d] = tmp;
                        }
                }
        }
}
