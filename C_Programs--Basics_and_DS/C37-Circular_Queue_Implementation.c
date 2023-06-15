//Basic Circular Queue Implementation

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void insert_cq(char ch_ele[],int *rear,char cq[],int *count,int n);
char delete_cq(int *front,char cq[],int *count,int n);
void display_cq(int front,int count,char cq[],int n);

int main()
{
    char cq[SIZE];
    char ch_ele[1],item_del;
    int front=0,rear=-1,ch,n,count=0;
    printf("Enter the size of the cqueue\n");
    scanf("%d",&n);
    for( ; ; )
    {
        printf("Enter 1.Insert 2.Delete 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(count==n)
                   {
                       printf("The queue is full\n");
                       break;
                   }
                   printf("Enter the element to be inserted\n");
                   scanf("%s",&ch_ele[1]);
                   insert_cq(ch_ele,&rear,cq,&count,n);
                   break;
            case 2:if(count==0)
                   {
                       printf("The queue is empty\n");
                       break;
                   }
                   item_del = delete_cq(&front,cq,&count,n);
                   break;
            case 3:if(count==0)
                   {
                       printf("The queue is empty\n");
                       break;
                   }
                   display_cq(front,count,cq,n);
                   break;
            case 4:exit(0);
        }
    }
}
void insert_cq(char ch_ele[],int *rear,char cq[],int *count,int n)
{
    *rear = (*rear+1)%n;
    cq[*rear]=ch_ele[1];
    *count++;
}
char delete_cq(int *front,char cq[],int *count,int n)
{
    char del_ele = cq[*front];
    *front = ((*front)+1)%n;
    *count = *count - 1;
    return del_ele;
}
void display_cq(int front,int count,char cq[],int n)
{
    int i;
    for(i=0;i<count;i++)
    {
        printf("%c",cq[front]);
        front = (front+1)%n;
    }
}