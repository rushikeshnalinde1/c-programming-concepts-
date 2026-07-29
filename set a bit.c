#include <stdio.h>

int main() {
    int num = 10;      // Binary: 1010

    num = num | (1 << 2);   // Set bit 2

    printf("%d\n", num);

    return 0;
}
