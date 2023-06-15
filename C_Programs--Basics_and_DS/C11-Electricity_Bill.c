//Electricity Bill 

#include <stdio.h>

int main()
{
    int i;
    char name[50];
    float units,cost;
    printf("Enter your name\n");
    gets(name);
    printf("Enter the number of units consumed\n");
    scanf("%f",&units);
    if(units<=200)
    cost = units*0.80;
    else if(units>=200 && units<=300)
    cost = (200*0.80)+((units-200)*0.90);
    else
    cost = (200*0.80)+(100*0.90)+((units-300)*1);
    
    cost = cost + 100; //Basic Charges 
    if(cost>400)
    {
        cost = cost+(0.15*cost);
    }
    
    printf("%s, your total bill is %f",name,cost);
}