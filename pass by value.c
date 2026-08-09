// 1.Pass by value 
#include <stdio.h>

float calculate(float a, float b, float c){
    return a+b*c;
}
int main() {
    // Write C code here
    int a = 3, b=4, c=7;
    float result = calculate(a, b, c);
    
    printf("result = %.2f", result);

    return 0;
}
