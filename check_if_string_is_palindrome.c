#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[128];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    int length = strlen(input);

    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("'%s' is a palindrome", input);
    } else {
        printf("'%s' is not a palindrome", input);
    }

    return 0;
}