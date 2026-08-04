#include <stdio.h>

int firstSetBit(int num)
{
    int position = 1;

    while((num & 1) == 0)
    {
        num = num >> 1;
        position++;
    }

    return position;
}

int main()
{
    int num = 18;

    printf("%d", firstSetBit(num));
}
