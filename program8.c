#include <stdio.h>

int Strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') length++;
    return length;
}

void Strcpy(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') i++;
}

void Strcat(char *dest, const char *src) {
    int i = Strlen(dest), j = 0;
    while ((dest[i++] = src[j++]) != '\0');
}

void Strrev(char *str) {
    int len = Strlen(str), i;
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int Strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int main() {
    char str1[100], str2[100];
    int choice;

    do {
        printf("\nMenu:\n1. Strlen\n2. Strcpy\n3. Strcat\n4. Strrev\n5. Strcmp\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                printf("Length: %d\n", Strlen(str1));
                break;
            case 2:
                printf("Enter a string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                Strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                str2[Strlen(str2) - 1] = '\0';
                Strcat(str1, str2);
                printf("Concatenated string: %s\n", str1);
                break;
            case 4:
                printf("Enter a string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                Strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;
            case 5:
                printf("Enter first string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                printf("Enter second string: ");
                fgets(str2, 100, stdin);
                str2[Strlen(str2) - 1] = '\0';
                int cmp = Strcmp(str1, str2);
                printf("Comparison result: %d\n", cmp);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
