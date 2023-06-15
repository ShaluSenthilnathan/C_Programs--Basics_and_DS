//Interger Circular Queue 

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100 

int cq_full(int count);
int cq_empty(int count);
void insert_ele(int ele,int *rear,int cq[],int *count);
int delete_ele(int *front,int cq[],int *count);
void display(int front,int count,int cq[]);

int main()
{
    int cq[SIZE],ch,n,ele,front=0,rear = -1,count=0;
    printf("Enter the number of elements of the cqueue\n");
    scanf("%d",&n);
    for( ; ; )
    {
        printf("\nEnter 1.Insert 2.Delete 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(cq_full(count))
                   {
                       printf("The queue is full\n");
                       break;
                   }
                   printf("Enter the element to be inserted\n");
                   scanf("%d",&ele);
                   insert_ele(ele,&rear,cq,&count);
                   break;
                   
            case 2:if(cq_empty(count))
                   {
                       printf("The queue is empty\n");
                       break;
                   }
                   int i = delete_ele(&front,cq,&count);
                   printf("The delted element is %d\n",i);
                   break;
            
            case 3:if(cq_empty(count))
                   {
                       printf("The queue is empty\n");
                       break;
                   }
                   display(front,count,cq);
                   break;
                   
            case 4:exit(0);
            
        }
        
    }
    return 0;
}

int cq_full(int count)
{
    if(count == SIZE)
       return 1;
    return 0;
}
int cq_empty(int count)
{
    if(count == 0)
       return 1;
    return 0;
}
void insert_ele(int ele,int *rear,int cq[],int *count)
{
    (*rear) = ((*rear)+1)%SIZE;
    cq[*rear] = ele;
    *count = *count + 1;
}
int delete_ele(int *front,int cq[],int *count)
{
    int j = cq[*front];
    (*front) = ((*front)+1)%SIZE;
    (*count)--;
    return j;
}
void display(int front,int count,int cq[])
{
    int i;
    for(i=0;i<(count);i++)
    {
        printf("%d\t",cq[front]);
        (front) = ((front)+1)%SIZE;
    }
}
