// Reverse a string.
#include <stdio.h>

int main(){
    // Write C code here
    char str[] = "hello";
    char *p = str;
    int len = sizeof(str)-1;
    for(int i=0; i<len/2; i++){
        char temp = *(p+i);
        *(p+i) = *(p+len-1-i);
        *(p+len-1-i) = temp;
    }
    for(int i=0; i<len; i++){
        printf("%c ", str[i]);
    }
    return 0;
}
