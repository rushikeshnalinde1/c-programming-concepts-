// pass a pointer to a function
#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 1;
    int b = 2;
    int *p = &a;
    int *q = &b;
    swap(p, q);
    printf("a = %d, b = %d", a, b);
    return 0;
}
