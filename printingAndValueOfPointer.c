//printing value and address of a variable

#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a;
    printf("value = %d and address = %p", *p, p);
    return 0;
}