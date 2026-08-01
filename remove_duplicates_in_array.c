#include <stdio.h>
#include <stdlib.h>

#define GREEN "\033[32m"
#define RED   "\033[31m"
#define RESET "\033[0m"
#define YELLOW "\033[33m"

int compare(const void*, const void*);

int main(void) {
    int n;

    printf("ENTER LENGTH OF LIST>>");

    if (scanf("%i", &n) != 1 || n < 1) {
        printf(RED "INVALID" RESET "\n");
        return EXIT_FAILURE;
    }

    int *arr = malloc(n * sizeof *arr);

    if (NULL == arr) {
        printf(YELLOW "COULD NOT ALLOCATE MEMORY" RESET "\n");
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

    qsort(arr, n, sizeof *arr, compare);

    int *result = malloc(n * sizeof *result);
    int m = 0;

    result[m++] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        }
        result[m++] = arr[i];
    }

    printf(GREEN "ARRAY WITHOUT DUPLICATES>>" RESET);

    for (int i = 0; i < m; i++) {
        printf(GREEN "%i " RESET, result[i]);
    }

    printf("\n");

    return EXIT_SUCCESS;
}

int compare(const void *a, const void *b) {
    const int *x = a;
    const int *y = b;

    if (*x > *y) {
        return 1;
    }

    if (*x < *y) {
        return -1;
    }

    return 0;
}