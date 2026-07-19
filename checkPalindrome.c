#include <stdio.h>

int main() {
    char str[] = "a";
    int len = sizeof(str);
    
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-2-i]){
            printf("not a palindrome");
            return 0;
        }
    }
    
    printf("palindrome");
    return 0;
}
