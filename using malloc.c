// 
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int *ptr = (int*)malloc(sizeof(int));
    if(ptr == NULL){
        printf("memory allocation failed \n");
        return 1;
    }
    printf("enter the element you want to save \n");
    scanf("%d", &*ptr);
    printf("%d", *ptr);
    free(ptr);

    return 0;
}
