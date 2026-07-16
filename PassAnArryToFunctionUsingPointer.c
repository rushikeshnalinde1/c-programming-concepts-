// 1.Pass an array to a function using pointers. 
#include <stdio.h>

void clear(int *arr, int len){
    for(int i=0; i<len; i++){
        arr[i] = 0;
    }
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int len = sizeof(arr)/sizeof(arr[0]);
    clear(arr, len);
    for(int i=0; i<len;i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}
