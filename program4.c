#include <stdio.h>
#include <ctype.h>

void to_uppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}

int main() {
    char text[100];
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    to_uppercase(text);

    printf("Uppercase: %s\n", text);
    return 0;
}
