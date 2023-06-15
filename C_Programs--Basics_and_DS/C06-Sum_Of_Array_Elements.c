//Sum Of Array Elements Using Functions 
#include <stdio.h>
#define SIZE 10

float sum(float arr[],int n);

int main()
{
    int i,n;
    float arr[SIZE];
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
    scanf("%f",&arr[i]);
    
    printf("The array you entered is\n");
    for(i=0;i<n;i++)
    printf("%f\t",arr[i]);

    printf("\nThe sum of the elements is %f",sum(arr,n));
    return 0;
}

float sum(float arr[],int n)
{
    float sum=0;
    int i;
    for(i=0;i<n;i++)
    sum = sum + arr[i];
    return sum; 
}
