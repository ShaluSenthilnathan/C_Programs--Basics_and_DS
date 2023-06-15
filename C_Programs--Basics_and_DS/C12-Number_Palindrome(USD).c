//Check If A Number Is Prime Using User-Defined Functions 
#include <stdio.h>

int check_prime(int num);

int main()
{
    int num,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    int res = check_prime(num);
    if(res==1)
    printf("%d is prime\n",num);
    else
    printf("%d is not prime\n",num);
    return 0;
}
int check_prime(int num)
{
    int i;
    if(num == 1)
    return -1;
    else if(num == 2)
    return 1;
    for(i=2;i<num;i++)
    {
        if(num%i == 0)
        return -1;
        else 
        return 1;
    }
}

