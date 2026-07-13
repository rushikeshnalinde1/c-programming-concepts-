// 1.Search an element in an array. 
#include <stdio.h>

int main() {
    int arr[] = {1,2,4,8,16, 32, 64};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *p = arr;
    int num;
    printf("enter the no you want to search ");
    scanf("%d", &num);
    for(int i=0; i<len; i++){
        if(*p == num){
            printf("found at %d position \n", i+1);
            return 0;
        }
        p++;
    }
    printf("not found");   
    return 0;
}
