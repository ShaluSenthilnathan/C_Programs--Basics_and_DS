//Sum Of Two Numbers Using User-Defined Function 

#include <stdio.h>

int sum(int a,int b);

int main()
{
    int a=10,b=5,c;
    c = sum(a,b);
    printf("The sum is %d\n",c);
    return 0;
}
int sum(int a,int b)
{
    return (a+b);
}
