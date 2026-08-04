#include <stdio.h>

int isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main()
{
    int n = 16;

    if(isPowerOfTwo(n))
        printf("Power of Two");
    else
        printf("Not a Power of Two");

    return 0;
}
