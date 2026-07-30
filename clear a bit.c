// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int number = 13;
    number = number & ~(1 << 2);
    printf("%d", number);   // Output: 9

    return 0;
}
