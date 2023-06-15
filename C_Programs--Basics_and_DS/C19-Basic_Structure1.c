//Basic Structure With Details Of One Student 

#include <stdio.h>

struct student
{
    char name[10];
    int age;
    float marks;
    char sub_name[10];
}st1 = {"ABC",20,85.5,"ABCD"};

int main()
{
    printf("The details of the student are\n");
    printf("Name = %s\n",st1.name);
    printf("Age = %d\n",st1.age);
    printf("Marks = %f\n",st1.marks);
    printf("Subject_Name = %s\n",st1.sub_name);
    return 0;
}
