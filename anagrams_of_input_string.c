#include <stdio.h>
#include <string.h>

#define MAX 10

void anagrams(char * prefix, char * word);

int main(void)
{
    printf("String? ");
    char word[MAX];
    scanf("%s", word);

    char prefix[MAX];
    strcpy(prefix, "");

    anagrams(prefix, word);
}

void anagrams(char * prefix, char * word)
{
    if(strlen(word) == 1) {
        printf("%s%s\n", prefix, word);
    } else {        
        for(int i = 0; i < strlen(word); ++i) {
            char word_copy[MAX];
            char prefix_copy[MAX];

            strcpy(prefix_copy, prefix);

            strncat(prefix_copy, word + i, 1);
            strncpy(word_copy, word, i);
            word_copy[i] = '\0';
            strncat(word_copy, word + i + 1, strlen(word) - i -1);

            anagrams(prefix_copy, word_copy);
        }
    }
}