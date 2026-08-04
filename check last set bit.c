#include <stdio.h>

int lastSetBitPosition(int num)
{
    if(num == 0)
        return 0;

    int position = 0;

    while(num)
    {
        position++;
        num = num >> 1;
    }

    return position;
}

int main()
{
    int num = 18;

    printf("%d", lastSetBitPosition(num));

    return 0;
}
