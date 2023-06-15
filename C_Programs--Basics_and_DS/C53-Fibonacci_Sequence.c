//Code To Print Fibonacci Sequence Of A Number 

#include <stdio.h>

void fiboncci(int n);

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    fiboncci(n);
    return 0;
}
void fiboncci(int n)
{
    int i,n1=0,n2=1,n3;
    if(n==0||n==1)
    {
        printf("%d",n);
        return ;
    }
    printf("0 1 ");
    for(i=2;i<n;i++)
    {
        n3 = n1 + n2;
        printf("%d ",n3);
        n1 = n2;
        n2 = n3;
    }
    
}

