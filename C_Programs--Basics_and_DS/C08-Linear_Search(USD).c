//Linear Search Using User Defined Functions 
#include <stdio.h>

#define SIZE 50

void Read_arr(int n,int arr[]);
void Print_arr(int n,int arr[]);
int Linear_Search(int n,int arr[],int key);


int main()
{
    int n,arr[SIZE],key,index;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    Read_arr(n,arr);
    printf("The elements are\n");
    Print_arr(n,arr);
    printf("\nEnter the key element to be searched\n");
    scanf("%d",&key);
    index = Linear_Search(n,arr,key);
    if (index==-1)
        printf("Key is not present in the array\n");
    else 
        printf("Key is present at %d index\n",index);
    return 0;
}
void Read_arr(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}
void Print_arr(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int Linear_Search(int n,int arr[],int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        return i;
    }
    return -1;
}
