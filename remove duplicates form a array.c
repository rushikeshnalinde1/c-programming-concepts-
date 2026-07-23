// 1.Remove duplicate elements 
#include <stdio.h>

int main() {
    // Write C code here
    int len;
    printf("enter the size of array\n");
    scanf("%d", &len);
    int arr[len];
    printf("enter the elements of the array\n");
    
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; ){
            if(arr[i] == arr[j]){
                len--;
                for(int k=j; k<len; k++){
                    arr[k] = arr[k+1];
                }
            }
            else{
                j++;
            }
        }
    }
    
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }
    

    return 0;
}
