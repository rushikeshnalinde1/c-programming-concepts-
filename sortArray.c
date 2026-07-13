// Sort an array using pointers
#include <stdio.h>

int main() {
    int arr[] = {3, 1, 2, 5, 0};
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++){
        int *p = arr;
        for(int j=0; j<len-1; j++){
            if(*(p+1)<*p){
                int temp = *(p+1);
                *(p+1) = *p;
                *p = temp;
            }
            p++;
        }
    }
    for(int i=0; i<len; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
