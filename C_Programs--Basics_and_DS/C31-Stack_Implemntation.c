//Stack Implementation 

#define SIZE 100
#include <stdio.h>
#include <stdlib.h>

int stack_full(int top,int n);
int stack_empty(int top);
void push(int ele,int *top,int stack[]);
int pop(int *top,int stack[]);
void display(int top,int stack[]);

int main()
{
    int n,stack[SIZE],ch,ele,pop_ele,top=-1;
    printf("Enter the number of elements of the stack\n");
    scanf("%d",&n);
    for( ; ; )
    {
        printf("Enter 1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(stack_full(top,n))
                   {
                       printf("Stack is full\n");
                       break;
                   }
                   printf("Enter the element to be pushed\n");
                   scanf("%d",&ele);
                   push(ele,&top,stack);
                   break;
                   
            case 2:if(stack_empty(top))
                   {
                       printf("The stack is empty\n");
                       break;
                   }
                   pop_ele = pop(&top,stack);
                   break;
            case 3:if(stack_empty(top))
                   {
                       printf("The stack is empty\n");
                       break;
                   }
                   display(top,stack);
                   break;
                   
            case 4: exit(0);
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
    if(top==-1)
       return 1;
    return 0;
}
void push(int ele,int *top,int stack[])
{
    (*top)++;
    stack[*top] = ele;
    return ;
}
int pop(int *top,int stack[])
{
    int i = stack[*top];
    (*top)--;
    return i;
}
void display(int top,int stack[])
{
    int i;
    for(i=top;i>=0;i--)
       printf("%d\t",stack[i]);
}



