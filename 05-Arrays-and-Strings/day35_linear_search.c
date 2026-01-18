#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40}, key = 30, found = 0;
    for(int i=0; i<4; i++) {
        if(arr[i] == key) { printf("Found at index %d", i); found=1; }
    }
    if(!found) printf("Not found");
    return 0;
}
