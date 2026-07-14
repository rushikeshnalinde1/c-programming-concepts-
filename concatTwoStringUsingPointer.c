// Concatenate two strings
#include <stdio.h>

int main() {
    char arr1[20] = "1abcd6";
    char arr2[] = "789";
    int len1 = sizeof(arr1);
    int len2 = sizeof(arr2);
    char *p = arr1;
    char *q = arr2;
    while(*p != '\0'){
        p++;
    }
    while(*q != '\0'){
        *p=*q;
        p++;
        q++;
    }
    *p = '\0';
    
    p = arr1;
    while(*p != '\0'){
        printf("%c ", *p);
        p++;
    }
    
    return 0;
}
