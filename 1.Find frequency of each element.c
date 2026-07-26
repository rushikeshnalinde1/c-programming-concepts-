// frequency of each no
#include <stdio.h>

int main() {
    // Write C code here
    int len;
    printf("enter the size of the array\n");
    scanf("%d", &len);
    
    int arr[len];
    int v[len];
    printf("enter the elements of the array\n");
    for(int i=0; i<len; i++){
        scanf("%d", &arr[i]);
        v[i] = 0;
    }
    
    for(int i=0; i<len; i++){
        if(v[i] == 1){
            continue;
        }
        
        int count = 1;
        for(int j=i+1; j<len; j++){
            if(arr[i] == arr[j]){
                count++;
                v[j] = 1;
            }
        }
        printf("%d appears %d times \n", arr[i], count);
    }

    return 0;
}
