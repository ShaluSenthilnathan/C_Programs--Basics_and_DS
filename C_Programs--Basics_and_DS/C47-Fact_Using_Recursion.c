//Factorial Of A Number Using Recursion 

#include <stdio.h>

long long int fact(int n);

int main()
{
    int n;
    long long int res;
    printf("Enter the number\n");
    scanf("%d",&n);
    res = fact(n);
    printf("The factorial of %d is %lld\n",n,res);
    return 0;   
}

long long int fact(int n)
{
    if(n == 0)
       return 1;
    return (n * fact(n-1));   
}