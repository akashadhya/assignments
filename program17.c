#include <stdio.h>

void encodeLine(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] == 'z') ? 'a' : str[i] + 1;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] == 'Z') ? 'A' : str[i] + 1;
        } else if (str[i] >= '0' && str[i] <= '9') {
            str[i] = (str[i] == '9') ? '0' : str[i] + 1;
        }
        i++;
    }
}

int main() {
    char str[200];

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    encodeLine(str);

    printf("Encoded line: %s", str);

    return 0;
}