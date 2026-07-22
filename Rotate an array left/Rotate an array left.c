// Rotate an array left/right 
#include <stdio.h>

int main() {
    // Write C code here
    int size;
    printf("enter the size of array\n");
    scanf("%d", &size);
    int arr[size]; 
    printf("enter the array elements \n");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for(int i=0; i<size-1; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
    
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}
