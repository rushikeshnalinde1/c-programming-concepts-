#include <stdio.h>

struct stude{
    int roll;
    float cgpa;
    char divison;
};

int main() {
    
    struct stude s1;
    s1.roll = 49;
    s1.cgpa = 9.55;
    s1.divison = 'A';
    
    printf("%d, %.2f, %c", s1.roll, s1.cgpa, s1.divison);
    return 0;
}
