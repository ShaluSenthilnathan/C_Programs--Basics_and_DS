//Code To Find The Largest Number Of An Array Using Recursion 
#include <stdio.h>

int largest_element(int arr[],int max,int n);

int main()
{
    int arr[100],n,i,max;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    max = arr[0];
    printf("The largest number of the array is %d\n",largest_element(arr,max,n));
    return 0;
}
int largest_element(int arr[],int max,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
           max = arr[i];
           largest_element(arr,max,n);
        }
    }
    return max;
}
