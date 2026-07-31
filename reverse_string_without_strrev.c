#include <stdio.h>
#include <string.h>

int main(void) {
    char input_string[128];

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    input_string[strcspn(input_string, "\n")] = '\0';

    int length = strlen(input_string);

    for (int i = 0; i < length / 2; i++) {
        char tmp = input_string[i];
        input_string[i] = input_string[length - i - 1];
        input_string[length - i - 1] = tmp;
    }

    printf("Reversed string: %s\n", input_string);

    return 0;
}