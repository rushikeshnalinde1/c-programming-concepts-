// linerar search
#include <stdio.h>

int main() {
    int arr[] = {1, 4, 3,  2, 7, 9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int num = 11;
    
    for(int i=0; i<len; i++){
        if(num == arr[i]){
            printf("found");
            return 0;
        }
    }
    
    printf("not found");
    return 0;
}
