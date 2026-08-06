// 1.Array of structures 
#include <stdio.h>

struct stude{
    int roll;
    float cgpa;
    char divison;
};

int main() {
    
    
    struct stude student[3];
    for(int i=0; i<3; i++){
        student[i].roll = i+10;
        student[i].cgpa = i+6;
        student[i].divison = 'A'+i;
        printf("student no %d, roll=%d, cgpa=%.2f, divison=%c\n",i+1, student[i].roll, student[i].cgpa, student[i].divison);
    }
    
    return 0;
}
