#include <stdio.h>
#include <string.h>
int main() {
    char s[] = "radar"; int n = strlen(s), f = 0;
    for(int i=0; i<n/2; i++) if(s[i] != s[n-i-1]) f = 1;
    if(f) printf("Not Palindrome"); else printf("Palindrome");
    return 0;
}
