#include <stdio.h>
#include <stdlib.h>

#define GREEN "\033[32m"
#define RED   "\033[31m"
#define RESET "\033[0m"
#define YELLOW "\033[33m"

int main(void) {
    int n;

    printf("ENTER LENGTH OF LIST>>");
    if (scanf("%i", &n) != 1 || n < 2) {
        printf(RED "INVALID" RESET "\n");
        return EXIT_FAILURE;
    }

    int *arr = malloc(n * sizeof *arr);

    if (arr == NULL) {
        printf(YELLOW "MEMORY ALLOCATION FAILED" RESET "\n");
        return EXIT_FAILURE;
    }

    printf("ENTER LIST>>");
    for (int i = 0; i < n; i++) {
        if (scanf("%i", arr + i) != 1) {
            printf(RED "INVALID" RESET "\n");
            free(arr);
            return EXIT_FAILURE;
        }
    }

    int *max = arr;
    int *max2 = NULL;

    for (int i = 2; i < n; i++) {
        if (arr[i] > *max) {
            max2 = max;
            max = arr + i;
        } else if (arr[i] < *max) {
            if (NULL == max2 || arr[i] > *max2 ) {
                max2 = arr + i;
            }
        }
    }

    printf(GREEN "SECOND LARGEST>>%i" RESET "\n", *max2);

    free(arr);

    return EXIT_SUCCESS;
}