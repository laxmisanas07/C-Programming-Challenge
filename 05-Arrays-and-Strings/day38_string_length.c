#include <stdio.h>
int main() {
    char s[] = "GitHub"; int l = 0;
    while(s[l] != '\0') l++;
    printf("Length: %d", l);
    return 0;
}
