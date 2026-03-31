#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    printf("Sum of digits of 1234 is %d\n", sumOfDigits(1234));
    return 0;
}
