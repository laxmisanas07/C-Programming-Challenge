#include <stdio.h>
#include <string.h>
int main() {
    char s1[]="Hello", s2[]="Hello";
    if(strcmp(s1, s2) == 0) printf("Equal");
    else printf("Not Equal");
    return 0;
}
