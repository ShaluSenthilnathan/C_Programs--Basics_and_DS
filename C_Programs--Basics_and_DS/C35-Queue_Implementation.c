//Queue Implementation 

#include <stdio.h>
#include <stdlib.h>

int queue_full(int *rear,int n);
void queue_insert(int ele,int *rear,int queue[]);
int queue_empty(int *front,int *rear);
int queue_delete(int *front,int queue[]);
void queue_display(int front,int rear,int queue[]);

void main()
{
    int queue[100],front=0,rear=-1,ch,n,ele,res;
    printf("Enter the number of elements of the queue\n");
    scanf("%d",&n);
    for( ; ; )
    {
        printf("\nEnter 1.Insert 2.Delete 3.Display 4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(queue_full(&rear,n))
                  {
                      printf("The queue is full\n");
                      break;
                   } 
                   printf("Enter the element to be inserted\n");
                   scanf("%d",&ele);
                   queue_insert(ele,&rear,queue);
                   break;
            
            case 2:if(queue_empty(&front,&rear))
                   {
                       printf("The queue is empty\n");
                       break;
                    }
                    printf("The deleted element is %d\n",queue_delete(&front,queue));
                    break;
            
            case 3:if(queue_empty(&front,&rear))
                   {
                       printf("The queue is empty\n");
                       break;
                    }
                    queue_display(front,rear,queue);
                    break;
            
            case 4:exit(0);
        }
    }
}
int queue_full(int *rear,int n)
{
    if(*rear == (n-1))
       return 1;
    return 0;
}
void queue_insert(int ele,int *rear,int queue[])
{
    ++(*rear); //pre increment rear coz can't enter an element at -1
    queue[(*rear)] = ele;
    return ;
}
int queue_empty(int *front,int *rear)
{
    if(*front > *rear)
       return 1;
    return 0;
}
int queue_delete(int *front,int queue[])
{
    int i = queue[*front];
    (*front)++;
    return i;
}
void queue_display(int front,int rear,int queue[])
{
    int i;
    for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
}
