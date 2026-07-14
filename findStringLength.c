// 1.Find string length. 
#include <stdio.h>

int main() {
    char arr[] = "five";
    char *p = arr;
    int length = 0;
    
    while(*p != '\0'){
        p++;
        length++;
    }
    printf("%d", length);

    return 0;
}
