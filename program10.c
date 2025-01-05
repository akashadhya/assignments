#include <stdio.h>

void decimal_to_base(int num, int base) {
    if (num == 0) return;
    decimal_to_base(num / base, base);
    printf("%d", num % base);
}

int main() {
    int num, base;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Number in base %d: ", base);
    decimal_to_base(num, base);
    printf("\n");

    return 0;
}
