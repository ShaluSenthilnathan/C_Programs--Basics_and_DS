//Structure Involving Addition Of Another Set Of Details In The Later Part Of The Code 

#include <stdio.h>

struct student
{
    char name[10];
    int age;
    float marks;
    char sub_name[10];
}st1 = {"abc",20,85.5,"abcd"};

int main()
{
    struct student st2;
    printf("Enter the details of the second student\n");
    printf("Enter name\n");
    scanf("%s",&st2.name);
    printf("Enter age\n");
    scanf("%d",&st2.age);
    printf("Enter marks\n");
    scanf("%f",&st2.marks);
    printf("Enter Subject Name\n");
    scanf("%s",&st2.sub_name);

    printf("Details\n");
    printf("Student1\n");
    printf("%s\t%d\t%f\t%s\n",st1.name,st1.age,st1.marks,st1.sub_name);
    printf("%s\t%d\t%f\t%s\n",st2.name,st2.age,st2.marks,st2.sub_name);

    return 0;



}