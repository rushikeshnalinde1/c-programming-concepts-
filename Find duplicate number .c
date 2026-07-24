// 1.Find duplicate number 
#include <stdio.h>

int main() {
    // Write C code here
    int len;
    int size=0;
    printf("enter the size of array\n");
    scanf("%d", &len);
    
    int arr[len];
    int duplicate[len];
    

    printf("enter the elements of array\n");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    
    
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i] == arr[j]){
                duplicate[size] = arr[i];
                size++;
                break;
            }
        }
    }
    
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;){
            if(duplicate[i] == duplicate[j]){
                for(int k=j; k<size; k++){
                    duplicate[k] = duplicate[k+1];
                }
                size--;
            }
            else{
                j++;
            }
        }
    }
    for(int i=0; i<size; i++){
        printf("%d ", duplicate[i]);
    }
    

    return 0;
}
