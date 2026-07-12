// Sum array elements. 
#include <stdio.h>

int main() {
    // Write C code here
    int sum = 0;
    int arr[] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        printf("%d\n", *(arr+i));
        sum += *(arr+i);
    }
    printf("sum = %d", sum);
    return 0;
}
