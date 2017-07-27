/*
 * Gnome sort - https://en.wikipedia.org/wiki/Gnome_sort
 */

void gnome_sort(int *arr, int siz)
{
        int i = 1;
        int tmp = 0;

        while (i < siz) {
                if (arr[i] >= arr[i-1]) {
                        i++;
                } else {
                        tmp = arr[i];
                        arr[i] = arr[i-1];
                        arr[i-1] = tmp;

                        if (i > 1)
                                i--;
                }
        }
}
