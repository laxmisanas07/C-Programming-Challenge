#include <stdio.h>
int main() {
    int n, rev = 0, org;
    printf("Enter: "); scanf("%d", &n);
    org = n;
    while(n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    if(org == rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
