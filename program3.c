#include <stdio.h>
#include <string.h>

void reverse_recursive(char *str, int start, int end) {
    if (start >= end) return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse_recursive(str, start + 1, end - 1);
}

void reverse_non_recursive(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char text[100];
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';

    reverse_non_recursive(text);
    printf("Reversed (non-recursive): %s\n", text);

    reverse_recursive(text, 0, strlen(text) - 1);
    printf("Reversed (recursive): %s\n", text);

    return 0;
}
