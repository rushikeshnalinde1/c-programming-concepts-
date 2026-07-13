// 1.Copy one array to another. 
#include <stdio.h>

int main() {
    int arr1[] = {1,2,4,8,16};
    int len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[len];
    int *p = arr1;
    int *q = arr2;
    for(int i=0; i<len; i++){
        *(q+i) = *(p+i);
    }
    for(int i=0; i<len; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}
