#include <stdio.h>
int main() {
    int arr[] = {12, 45, 2, 67, 10}, min, max;
    min = max = arr[0];
    for(int i=1; i<5; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
