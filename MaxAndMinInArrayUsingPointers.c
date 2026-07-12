// 1.Find the largest array element. 
// 2.Find the smallest array element. 
#include <stdio.h>

int main() {
    int arr[] = {4, 5, 1, 9, 0};
    int *ptr = arr;
    int max = *arr;
    int min = *arr;
    for(int i=1; i<5; i++){
        if(max<*(ptr+i)){
            max = *(ptr+i);
        }
        if(min>*(ptr+i)){
            min = *(ptr+i);
        }
    }
    printf("max=%d, min=%d", max, min);
    return 0;
}
