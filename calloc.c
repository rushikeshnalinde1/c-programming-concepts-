// calloc
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write C code here
    int *ptr = (int*)calloc(2, sizeof(int));
    if(ptr==NULL){
        printf("memory allocation failed\n");
        return 0;
    }
    
    printf("%d %d\n", ptr[0], ptr[1]);
    printf("enter the elements to store\n");
    for(int i=0; i<2; i++){
        scanf("%d", &ptr[i]);
    }
    printf("%d %d", ptr[0], ptr[1]);
    
    free(ptr);
    

    return 0;
}
