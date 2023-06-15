//Evaluation Of A Postfix Expression 

#include <stdio.h>
#include <ctype.h>

int eval(char postfix[]); 
void push(int token,int *top,int stack[]);
int pop(int *top,int stack[]);
int compute(int op1,int op2,char symbol);

int main()
{
    char postfix[20];
    printf("Enter a postfix expression\n");
    scanf("%s",postfix); //scanf doesn't take content after space...Here we won't give space in between...so scanf is suitable here 
    printf("The result of evaluation is %d",eval(postfix));
    return 0;
}
int eval(char postfix[])
{
    int i=0,token,op1,op2,result,top=-1,stack[100],temp;
    char symbol;
    while(postfix[i]!='\0')
    {
        symbol = postfix[i];
        if(isdigit(symbol))
        {
            token = symbol - '0';
            push(token,&top,stack);
        }
        else
        {
            op2 = pop(&top,stack);
            op1 = pop(&top,stack);
            result = compute(op1,op2,symbol);
            push(result,&top,stack);
        }
        i = i + 1;
    }
    temp = pop(&top,stack);
    return temp;
}
void push(int token,int *top,int stack[])
{
    (*top)++;
    stack[*top] = token;
}
int pop(int *top,int stack[])
{
    return(stack[(*top)--]);
}
int compute(int op1,int op2,char symbol)
{
    switch(symbol)
    {
        case '+': return(op1+op2);
                  break;
        case '-': return(op1-op2);
                  break;
        case '/': return(op1/op2);
                  break;
        case '*': return(op1*op2);
                  break;
    }
}