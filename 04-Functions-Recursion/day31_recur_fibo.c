#include <stdio.h>
int fibo(int n) {
    if(n <= 1) return n;
    return fibo(n-1) + fibo(n-2);
}
int main() {
    printf("5th Fibo term: %d\n", fibo(5));
    return 0;
}
