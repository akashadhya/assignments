#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_substring(const char *str1, const char *str2) {
    int len1 = strlen(str1), len2 = strlen(str2);

    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) break;
        }
        if (j == len2) return i + 1;
    }
    return 0;
}

int main() {
    char *str1, *str2;
    int len1, len2;

    printf("Enter the length of the first string: ");
    scanf("%d", &len1);
    getchar();

    str1 = (char *)malloc((len1 + 1) * sizeof(char));
    printf("Enter the first string: ");
    fgets(str1, len1 + 1, stdin);

    printf("Enter the length of the second string: ");
    scanf("%d", &len2);
    getchar();

    str2 = (char *)malloc((len2 + 1) * sizeof(char));
    printf("Enter the second string: ");
    fgets(str2, len2 + 1, stdin);

    int pos = is_substring(str1, str2);
    if (pos) {
        printf("Substring found at position: %d\n", pos);
    } else {
        printf("Substring not found.\n");
    }

    free(str1);
    free(str2);
    return 0;
}
