// Copy a string. 
#include <stdio.h>

int main() {
    char arr1[] = "123456";
    int length = sizeof(arr1)/sizeof(arr1[0]);
    char arr2[length];
    char *p = arr1;
    char *q = arr2;
    
    do{
        *q = *p;
        p++;
        q++;
    }while(*p != '\0');
    
    *q = *p;
    
    for(int i=0; i<length; i++){
        printf("%c ", arr2[i]);
    }

    return 0;
}
