#include <stdio.h>
int sumDigits(int n) {
    if(n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}
int main() {
    printf("Sum of digits: %d\n", sumDigits(123));
    return 0;
}
