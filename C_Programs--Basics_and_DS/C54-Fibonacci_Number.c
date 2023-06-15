//Code To Print The Fibonnaci Number At Index n

#include <stdio.h>

int fibonnaci(int n)
{
    if(n==0||n==1)
       return n;
    return fibonnaci(n-1)+fibonnaci(n-2);
}

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("%d",fibonnaci(n));
}

//This code returns the number at index n of the series