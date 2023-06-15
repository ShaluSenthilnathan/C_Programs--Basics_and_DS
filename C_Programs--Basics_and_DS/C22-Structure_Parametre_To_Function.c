//Passing Structure As A Paramtere To A Function 

#include <stdio.h>

struct student
{
    char name[10];
    int sem;
};
void print_sem(int s);
void print_both(struct student st);

void main()
{
    struct student st = {"ABC",3};
    print_sem(st.sem);
    print_both(st);
}
void print_sem(int s)
{
    printf("%d",s);
}
void print_both(struct student st)
{
    printf("%s %d",st.name,st.sem);
}

