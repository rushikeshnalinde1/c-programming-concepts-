// 1.Reverse an array. 
#include <stdio.h>

int main() {
    // Write C code here
    int temp;
    int arr[] = {2,4,6,8,1};
    int *p = arr;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len/2; i++){
        temp = *(p+i);
        *(p+i) = *(p+len-1-i);
        *(p+len-1-i) = temp;
    }
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
