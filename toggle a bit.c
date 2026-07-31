// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num = 10;      // Binary: 1010
    int pos = 1;      

    num = num ^ (1 << pos);
    printf("%d", num);

// Result: 1000 (decimal 8)

    return 0;
}
