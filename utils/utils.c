/*
 * utils.c: all the functions is used for algorithms
 * so arguments are int
 */

#include <utils.h>
#include <sort_conf.h>

/* free the pointer after using it */
int *rand_array(int siz, int max_num)
{
        int *arr;
        int i;
        //srand((unsigned) time(NULL));

        if (!(arr = malloc(sizeof(int) * siz)))
                exit(1);

        for (i = 0; i < siz; i++) {
                arr[i] = rand() % max_num;
        }

        return arr;
}

int *zero_array(int siz)
{
        int *arr;

        if (!(arr = malloc(sizeof(int) * siz)))
                exit(1);

        for (int i = 0; i < siz; i++)
                arr[i] = 0;

        return arr;
}

void print_array(int *arr, int siz)
{
        int i;

        for (i = 0; i < siz; i++)
                printf("%d ", arr[i]);
        printf("\n");
}

/*
 * sort_func: the sort function
 * siz: the size of the test array
 * maxnum: the max number of the array
 */
void sort_test2(void (*sort_func)(int *, int), int siz, int maxnum)
{
        int *arr;

        arr = rand_array(siz, maxnum);
        print_array(arr, siz);

        sort_func(arr, siz);
        print_array(arr, siz);

        /* must free it */
        free(arr);
}

void sort_test(void (*sort_func)(int *, int))
{
        sort_test2(sort_func, ARRSIZ, MAXNUM);
}
