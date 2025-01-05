#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Vowel_Cons_Count(const char *str, int *vowel_count, int *consonant_count) {
    *vowel_count = 0;
    *consonant_count = 0;

    for (int i = 0; str[i] != '\0' && str[i] != '#'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowel_count)++;
            } else {
                (*consonant_count)++;
            }
        }
    }
}

int main() {
    char text[100];
    int vowels, consonants;

    printf("Enter a line of text (end with #): ");
    fgets(text, sizeof(text), stdin);

    Vowel_Cons_Count(text, &vowels, &consonants);

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    return 0;
}
