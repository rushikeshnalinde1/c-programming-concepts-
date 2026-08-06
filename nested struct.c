
#include <stdio.h>
#include  <string.h>

struct address{
    int house_no;
    char city[20];
};

struct student{
    int roll;
    float cgpa;
    char divison;
    struct address add;
};

int main() {
    
    struct student ram;
    struct student *s1 = &ram;
    
    
    s1->add.house_no = 51;
    strcpy(s1->add.city, "pune");
    
    s1->roll = 21;
    s1->cgpa = 8.9;
    s1->divison = 'W';
    
    printf("%d, %.2f, %c, %d, %s", s1->roll, s1->cgpa, s1->divison,s1->add.house_no, s1->add.city);
    
    
    return 0;
}
