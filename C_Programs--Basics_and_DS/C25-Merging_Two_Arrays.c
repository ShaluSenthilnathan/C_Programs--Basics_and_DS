//Merging Two Arrays 

#include <stdio.h>
#define SIZE 100

void read_arr(int n,int arr[]);
void print_arr(int n,int arr[]);
void merge_arr(int n1,int n2,int arr1[],int arr2[]);



int main()
{
    int arr1[SIZE],arr2[SIZE],i,n1,n2;
    printf("Enter the number of elements of the first array\n");
    scanf("%d",&n1);
    read_arr(n1,arr1);
    printf("Enter the number of elements of the second array\n");
    scanf("%d",&n2);
    read_arr(n2,arr2);
    printf("\nThe array1 you entered is\n");
    print_arr(n1,arr1);
    printf("\nThe array2 you entered is\n");
    print_arr(n2,arr2);
    merge_arr(n1,n2,arr1,arr2);
    return 0;
}

void read_arr(int n,int arr[])
{
    int i;
    printf("Enter the %d elements\n",n);
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    return ;
}
void print_arr(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
    return ;
}
void merge_arr(int n1,int n2,int arr1[],int arr2[])
{
    int arr3[SIZE*SIZE],i,j,k;
    for(i=0;i<n1;i++)
    arr3[i] = arr1[i];
    k = i;
    for(j=0;j<n2;j++)
    {
        arr3[k] = arr2[j];
        k++;
    }
    printf("\nThe merged array is\n");
    for(i=0;i<n1+n2;i++)
        printf("%d\t",arr3[i]);
        
    return ;
}