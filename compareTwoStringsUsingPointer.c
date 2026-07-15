// compare two strings 
#include <stdio.h>

int main() {
    // Write C code here
    char str1[] = "hello";
    char str2[] = "hello";
    char *p = str1;
    char *q = str2;
    while(*p != '\0' || *q != '\0'){
        if(*p == *q){
            p++;
            q++;
        }
        else{
            printf("not equal");
            return 0;
        }
    }
    printf("equal");
    return 0;
}
