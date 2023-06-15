//GCD Of Two Numbers Using Recursion 

#include <stdio.h>

int GCD(int a,int b);

int main()
{
   int a,b;
   printf("Enter the two numbers\n");
   scanf("%d,%d",&a,&b);
   printf("The GCD of %d and %d is %d\n",a,b,GCD(a,b));
   return 0;
}

int GCD(int a,int b)
{
    if(b!=0)
       return GCD(b,a%b);
    return a;
    
}
