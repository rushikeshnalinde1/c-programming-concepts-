// 1.Remove spaces from a string 
#include <stdio.h>

int main() {
    char str[100];
    printf("enter the string\n");
    scanf("%99[^\n]", str);
    int i=0;
    int j=0;
    while(str[i]!= '\0'){
        if(str[i] != ' '){
            str[j] = str[i];
            j++;
        } 
        i++;
    }
    str[j]='\0';
    printf("%s", str);
    
    return 0;
}
