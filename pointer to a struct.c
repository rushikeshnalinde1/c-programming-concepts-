// Online C compiler to run C program online
#include <stdio.h>

struct stude{
    int roll;
    float cgpa;
    char divison;
};

int main() {
    
    
    struct stude student;
    struct stude *s1 = &student;
    s1->roll = 51;
    s1->cgpa = 9.9;
    s1->divison = 'B';
    
    printf("%d, %.2f, %c", s1->roll, s1->cgpa, s1->divison);
    return 0;
}
