#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[128];
    
    printf("ENTER A STRING>>");
    fgets(str, sizeof str, stdin);

    str[strcspn(str, "\n")] = '\0';

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int specials = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char c = tolower((unsigned char) str[i]);

        if (isalpha(c)) {
            switch (c) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vowels++;
                    break;
                default:
                    consonants++;
            }
        } else if (isdigit(c)) {
            digits++;
        } else if (ispunct(c)) {
            specials++;
        }
    }

    printf("VOWELS>>%i\n", vowels);
    printf("CONSONANTS>>%i\n", consonants);
    printf("DIGITS>>%i\n", digits);
    printf("SPECIAL CHARACTERS>>%i\n", specials);

    return 0;
}