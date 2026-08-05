#include <stdio.h>

int main()
{
    int a = 3;
    int b = 5;
    int c = 10;

    int packed = a | (b << 2) | (c << 5);

    printf("Packed = %d\n", packed);

    return 0;
}
