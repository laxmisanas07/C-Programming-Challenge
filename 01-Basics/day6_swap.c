#include <stdio.h>
int main() {
    int x = 10, y = 20, temp;
    temp = x; x = y; y = temp;
    printf("After Swapping: x = %d, y = %d\n", x, y);
    return 0;
}
