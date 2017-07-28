/*
 *
 */

#include <sorts.h>

int main(void)
{
        printf("bubble sort:\n");
        sort_test(bubble_sort);
        printf("\ncocktail sort:\n");
        sort_test(cocktail_sort);
        printf("\ncomb sort:\n");
        sort_test(comb_sort);
        printf("\ncounting sort:\n");
        sort_test(counting_sort);
        printf("\ngnome sort:\n");
        sort_test(gnome_sort);
        printf("\nheap sort:\n");
        sort_test(heap_sort);
        printf("\ninsertion sort:\n");
        sort_test(insertion_sort);
        printf("\nmerge sort:\n");
        sort_test(merge_sort);
        printf("\nodd_even sort:\n");
        sort_test(odd_even_sort);
        printf("\nquick sort:\n");
        sort_test(quick_sort);
        printf("\nselcetion sort:\n");
        sort_test(selection_sort);
        printf("\nshell sort:\n");
        sort_test(shell_sort);

        return 0;
}
