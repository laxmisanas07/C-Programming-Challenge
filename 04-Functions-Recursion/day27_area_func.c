#include <stdio.h>
float area(float r) { return 3.14 * r * r; }
int main() {
    printf("Area of circle: %.2f\n", area(5));
    return 0;
}
