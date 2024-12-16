#include <stdio.h>

int Strlen(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void Strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void Strcat(char dest[], char src[]) {
    int i = 0, j = 0;

    while (dest[i] != '\0') {
        i++;
    }

    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

void Strrev(char str[]) {
    int start = 0, end = Strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int Strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Strlen\n");
        printf("2. Strcpy\n");
        printf("3. Strcat\n");
        printf("4. Strrev\n");
        printf("5. Strcmp\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                printf("Length of the string: %d\n", Strlen(str1));
                break;

            case 2: 
                printf("Enter a source string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0'; 
                Strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;

            case 3:
                printf("Enter the first string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0';
                printf("Enter the second string: ");
                fgets(str2, 100, stdin);
                str2[Strlen(str2) - 1] = '\0';
                Strcpy(result, str1);
                Strcat(result, str2);
                printf("Concatenated string: %s\n", result);
                break;

            case 4:
                printf("Enter a string to reverse: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0'; 
                Strrev(str1);
                printf("Reversed string: %s\n", str1);
                break;

            case 5: // Strcmp
                printf("Enter the first string: ");
                fgets(str1, 100, stdin);
                str1[Strlen(str1) - 1] = '\0'; 
                printf("Enter the second string: ");
                fgets(str2, 100, stdin);
                str2[Strlen(str2) - 1] = '\0'; 
                int cmpResult = Strcmp(str1, str2);
                if (cmpResult == 0) {
                    printf("The strings are equal.\n");
                } else if (cmpResult < 0) {
                    printf("The first string is less than the second string.\n");
                } else {
                    printf("The first string is greater than the second string.\n");
                }
                break;

            case 6:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}