// 1.Pointer to a structure. 
#include <stdio.h>
struct stud{
    int roll;
    float salary;
};

void clear(struct stud *p){
    p->roll = 0;
    p->salary = 0;
}

int main() {
    struct stud s = {22, 22000};
    struct stud *p = &s;
    clear(p);
    printf("%d \n", p->roll);
    printf("%f ", p->salary);
    
    return 0;
}
