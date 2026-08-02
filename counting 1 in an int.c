#include <stdio.h>

int main()
{
    int num = 13;
    int count = 0;

    while(num)
    {
        if(num & 1)
        {
            count++;
        }

        num = num >> 1;
    }

    printf("Number of set bits = %d", count);

    return 0;
}
