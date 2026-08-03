// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    unsigned char num = 54;
    unsigned char even = num&0x55;
    unsigned char odd  = num&0xAA;
    
    even = even<<1;
    odd  = odd>>1;
    
    num = even | odd;
    
    printf("%d ", num);
    return 0;
}
