//Array Of Strutures As A Paramtere To A Function 

#include <stdio.h>

struct student
{
    char name[10];
    int sem;
};

void read_val(struct student st[],int n);
void print_val(struct student st[],int n);

void main()
{
    int n=5;
    struct student std[20];
    read_val(std,n);
    print_val(std,n);
}
void read_val(struct student st[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%s %d",st[i].name,&st[i].sem);
}
void print_val(struct student st[],int n)
{
    int i;
    for(i=0;i<n;i++)
       printf("%s\t%d\n",st[i].name,st[i].sem);
}
