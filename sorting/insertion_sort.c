/*
 * Insertion sort - https://en.wikipedia.org/wiki/Insertion_sort
 */

void insertion_sort(int *arr, int siz)
{
        int curr_val;
        int prev;

        if (siz <= 1)
                return;

        for (int curr = 1; curr < siz; curr++) {
                curr_val = arr[curr];
                prev = curr - 1;
                for (; prev >= 0 && arr[prev] > curr_val; prev--)
                        arr[prev + 1] = arr[prev];
                arr[prev + 1] = curr_val;
        }
}
