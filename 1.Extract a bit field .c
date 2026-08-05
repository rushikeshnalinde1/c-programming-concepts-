// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num = 0xAA;
    int shift = 2;
    int len = 4;
    
    int result = (num>>shift);
    result = result & ((1<<len)-1);
    printf("%u", result);

    return 0;
}
