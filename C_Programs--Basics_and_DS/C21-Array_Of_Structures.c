//Array Of Structures 

#include <stdio.h>

struct student
{
    char name[10];
    int age;
    float marks;
    char sub_name[10];
};

int main()
{
    struct student std[20];
    int n,i;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter details of %d student\n",i+1);
        scanf("%s %d %f %s",&std[i].name,&std[i].age,&std[i].marks,&std[i].sub_name);
    }
    printf("The details of the students are\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%f\t%s\n",std[i].name,std[i].age,std[i].marks,std[i].sub_name);
    }

    return 0;
}

