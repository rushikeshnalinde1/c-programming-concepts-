#include <stdio.h>

int main(){
    int sum = 0;
    int len;
    printf("enter the no of elements \n");
    scanf("%d", &len);
    int arr[len];
    printf("enter the elements of the array\n");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<len; i++){
        sum = sum+arr[i];
    }
    int total = ((len+1)*(len+2))/2;
    int rem = total-sum;
    printf("%d", rem);
    return 0;
}
