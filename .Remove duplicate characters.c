// 1.Remove duplicate characters 
#include <stdio.h>

int main() {
    char str[100];
    printf("enter the string \n");
    scanf("%99[^\n]", str);
    
    for(int i=0; str[i]!='\0'; i++){
        for(int j=i+1; str[j]!='\0';){
            if(str[i] == str[j]){
                for(int k=j; str[k]!='\0'; k++){
                    str[k] = str[k+1];
                }
            }else{
                j++;
            }
        }
    }
    
    printf("%s", str);

    return 0;
}
