//Inserrtion And Deletion In An Array 
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void read_arr(int arr[],int n);
void insert_ele(int arr[],int *n);
void delete_ele(int arr[],int *n);
void traverse_arr(int arr[],int n);

int main()
{
    int arr[SIZE],n,choice;
    printf("Enter the number of elements of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    read_arr(arr,n);
    for(;;) //Infinite loop
    {
        printf("\nEnter 1.Insert 2.Delete 3.Taverse 4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert_ele(arr,&n);
            break;
        
            case 2:
            delete_ele(arr,&n);
            break;
        
            case 3:
            traverse_arr(arr,n);
            break;
        
            case 4:
            exit(0);
        
            default:
            printf("Please enter a valid choice(1-4)\n");
        }
    }
    return 0;
}

void read_arr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    return ;
}

void insert_ele(int arr[],int *n) //*n coz value of n will change after insertion and deletion 
{
    int pos,num,i;
    printf("Enter the position at which you want to enter the element\n");
    scanf("%d",&pos);
    if(pos>=1 && pos<=(*n+1)) //If we have 10 boxes then u can add btw 1-11(ttr-class ex) - positioning starts from 1
    {
        printf("Enter the number you want to insert\n");
        scanf("%d",&num);
        for(i=(*n-1);i>=pos-1;i--) //visualize using sample array 
        {
            arr[i+1] = arr[i];
        }
        arr[i+1] = num; //alternate -- arr[pos-1] = num;
        *n = *n + 1; //Imp to update to n+1 coz insertion increases total number of elements by 1
    }
    else
        printf("Invalid Position\nInsertion not possible\n");
}
void delete_ele(int arr[],int *n)
{
    int pos,i;
    printf("Enter the position of the element you want to delete\n");
    scanf("%d",&pos);
    if(pos>=1 && pos<=*n) //U can delete between position 1 to the n only 
    {
        for(i=pos-1;i<(*n-1);i++) //Analyse using examplar array and understand 
           arr[i] = arr[i+1];
    }
    *n = *n - 1; //Imp to update n to n-1 coz after deletion the total number of elements decreses by 1
}
void traverse_arr(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}

//For inserting - Make space from end - so n-1 to >=pos-1
//For deletion  - pos-1 to <n-1;