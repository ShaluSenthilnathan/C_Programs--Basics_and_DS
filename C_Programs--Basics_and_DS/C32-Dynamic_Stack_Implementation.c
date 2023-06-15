//Dynamic Stack Implementation 

#include <stdio.h>
#include <stdlib.h>

int stack_full(int count,int cap);
int stack_empty(int count);
void push(int ele,int *top,int *stack,int *count);
int pop(int *top,int *stack,int *count);
void display(int top,int *stack);

int main()
{
    int count=0,cap=2,ch,ele,top=-1;
    int *stack = (int*)malloc(cap*sizeof(int));
    for( ; ;)
    {
        printf("\nEnter 1.Push 2.Pop 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(stack_full(count,cap))
                   {
                       printf("Reallocating\n");
                       stack = (int*)realloc(stack,2*cap*sizeof(int));
                       cap = cap * 2;
                   }
                   printf("Enter the element to be pushed\n");
                   scanf("%d",&ele);
                   push(ele,&top,stack,&count);
                   break;
            case 2:if(stack_empty(count))
                   {
                       printf("The stack is empty\n");
                       break;
                   }
                   int pop_ele = pop(&top,stack,&count);
                   printf("The popped element is %d\n",pop_ele);
                   break;
            case 3:if(stack_empty(count))
                   {
                       printf("The stack is empty\n");
                       break;
                   }
                   display(top,stack);
                   break;
            case 4: exit(0);
            default : printf("Enter a valid choice\n");
        }
    }
}
int stack_full(int count,int cap)
{
    if(count==cap)
       return 1;
    return 0;
}
int stack_empty(int count)
{
    if(count==0)
       return 1;
    return 0;
}
void push(int ele,int *top,int *stack,int *count)
{
    (*top)++;
    (*count)++;
    stack[*top] = ele;
}
int pop(int *top,int *stack,int *count)
{
    int i = stack[*top];
    (*top)--;
    (*count)--;
    return i;
}
void display(int top,int *stack)
{
    for(int i=top;i>=0;i--)
       printf("%d\t",stack[i]);
}
