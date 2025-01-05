#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int reverse_number(int n, int rev) {
    if (n == 0) return rev;
    return reverse_number(n / 10, rev * 10 + n % 10);
}

int sum_of_digits(int n) {
    if (n == 0) return 0;
    return n % 10 + sum_of_digits(n / 10);
}

void find_divisors(int n, int i) {
    if (i > n) return;
    if (n % i == 0) printf("%d ", i);
    find_divisors(n, i + 1);
}

int main() {
    int n = 5;
    printf("Fibonacci(%d): %d\n", n, fibonacci(n));
    printf("GCD(48, 18): %d\n", gcd(48, 18));
    printf("Factorial(%d): %d\n", n, factorial(n));
    printf("Reverse of 12345: %d\n", reverse_number(12345, 0));
    printf("Sum of digits of 123: %d\n", sum_of_digits(123));
    printf("Divisors of 12: ");
    find_divisors(12, 1);
    printf("\n");

    return 0;
}
