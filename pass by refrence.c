#include <stdio.h>
void add_five(int *ptr){
    *ptr = *ptr+5;
}
int main() {
    // Write C code here
    int num = 5;
    int *ptr = &num;
    add_five(ptr);
    printf("num = %d", num);

    return 0;
}
