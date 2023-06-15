//Stack Of Structures 

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

struct student
{
    int sid;
    char sname[10];
    char gender;
};

int stack_full(int top,int n);
int stack_empty(int top);
struct student push(struct student new_ele,int *top,struct student std_stack[]);
struct student pop(int *top,struct student std_stack[]);
struct student display(int top,struct student std_stack[]);

int main()
{
    struct student std_stack[SIZE],new_ele,pop_ele;
    int n,top=-1,ch;
    printf("Enter the number of details\n");
    scanf("%d",&n);
    for( ; ; )
    {
        printf("Enter 1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(stack_full(top,n))
                   {
                       printf("Stack Full\n");
                       break;
                   }
                   printf("Enter the details to be pushed\n");
                   printf("Enter sid,sname and gender\n");
                   scanf("%d %s %c",&new_ele.sid,new_ele.sname,&new_ele.gender);
                   push(new_ele,&top,std_stack);
                   break;
            case 2:if(stack_empty(top))
                   {
                       printf("The stack is empty\n");
                       break;
                   }
                   struct student pop_ele = pop(&top,std_stack);
                   printf("The popped data is:\n");
                   printf("%d %s %c",pop_ele.sid,pop_ele.sname,pop_ele.gender);
                   break;
            case 3:if(stack_empty(top))
                   {
                       printf("The stack is empty\n");
                       break;
                   }
                   display(top,std_stack);
                   break;
            case 4: exit(0);
            default: printf("Enter a valid choice\n");
        }
    }
}
int stack_full(int top,int n)
{
    if(top == (n-1))
       return 1;
    return 0;
}
int stack_empty(int top)
{
    if(top == -1)
       return 1;
    return 0;
}
struct student push(struct student new_ele,int *top,struct student std_stack[])
{
    (*top)++;
    std_stack[*top] = new_ele;
}
struct student pop(int *top,struct student std_stack[])
{
    struct student pop_ele = std_stack[*top];
    (*top)--;
    return pop_ele;
}
struct student display(int top,struct student std_stack[])
{
    for(int i=top;i>=0;i--)
    {
        printf("%d %s %c\n",std_stack[i].sid,std_stack[i].sname,std_stack[i].gender);
    }
}