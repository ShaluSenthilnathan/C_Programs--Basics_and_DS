//Binary Search Using Functions 

#include <stdio.h>
#include <stdlib.h>

void binary_search(int arr[],int n,int key);


int main()
{
    int arr[50],n,i,key;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the %d elements in ascending order\n",n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("Enter the key element to be searched\n");
       scanf("%d",&key);
    binary_search(arr,n,key);
    return 0;
}
void binary_search(int arr[],int n,int key)
{
    int i,mid,low,high;
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid] == key)
        {
            printf("%d found at index %d\n",key,mid);
            exit(0);
        }
        else if(arr[mid]>key)
            high = mid - 1;
        else
            low = mid + 1;
    }
}