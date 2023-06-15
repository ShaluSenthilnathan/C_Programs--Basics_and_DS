//Circular Linked List Implementation

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
   int data;
   struct node * link;
}NODE;

NODE *insert_front(int ele,NODE * last);
NODE *insert_rear(int ele,NODE * last);
NODE *delete_front(NODE * last);
NODE *delete_rear(NODE * last);
void display(NODE *last);
NODE *get_node();
int search(int ele,NODE *last);


int main()
{
   int ch,ele,flag;
   NODE * last = NULL;
   for( ; ; )
   {
      printf("Enter\n1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete at rear\n5.Display\n6.Search for an element\n7.Exit\n");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:printf("Enter the element to be inserted\n");
                scanf("%d",&ele);
                last = insert_front(ele,last);
                break;
               
         case 2:printf("Enter the element to be inserted\n");
                scanf("%d",&ele);
                last = insert_rear(ele,last);
                break;
               
         case 3:last = delete_front(last);
                break;
               
         case 4:last = delete_rear(last);
                break;
               
         case 5:display(last);
                break;
               
               
         case 6:if(last == NULL)
                {
                    printf("Empty List\n");
                    break;
                }
                printf("Enter the element to be searched\n");
                scanf("%d",&ele);
                flag = search(ele,last);
                if(flag == 1)
                   printf("Successful Search\n");
                else
                   printf("Unsuccessful Search\n");
                break;
               
         case 7:exit(0);
      }
   }
   return 0;
}

NODE *insert_front(int ele,NODE * last)
{
   NODE *new;
   new = get_node();
   new->data = ele;
   if(last == NULL)
   {
      last = new;
   }
   else
   {
      new->link = last->link;
   }
   last->link = new;
   return last;
}

NODE *insert_rear(int ele,NODE * last)
{
   NODE *new;
   new = get_node();
   new->data = ele;
   if(last == NULL)
   {
      last = new;
   }
   else
   {
      new->link = last->link;
   }
   last->link = new;
   return new;
}

NODE *delete_front(NODE * last)
{
   NODE *new;
   if(last == NULL)
   {
      printf("List Empty\n");
      return NULL;
   }
   if(last->link==NULL)
   {
      printf("The deleted node is %d\n",last->data);
      free(last);
      return NULL;
   }
   new = last->link;
   last->link = new->link;
   printf("The deleted node is %d\n",new->data);
   free(new);
   return last;
   
}

NODE *delete_rear(NODE * last)
{
   if(last==NULL)
   {
      printf("List Empty\n");
      return NULL;
   }
   if(last->link == last)
   {
      printf("The deleted node is %d\n",last->data);
      free(last);
      return NULL;
   }
   NODE *prev,*present;
   prev = NULL;
   present = last->link;
   while(present != last)
   {
      prev = present;
      present = present->link;
   }
   prev->link = present->link;
   printf("The deleted node is %d\n",present->data);
   free(present);
   return prev;
}
 void display(NODE *last)
 {
    NODE *temp;
    if(last == NULL)
    {
       printf("List Empty\n");
       return ;
    }
    for(temp = last->link;temp != last;temp= temp->link)
       printf("%d\t",temp->data);
       
    printf("%d",last->data);
    printf("\n");
    return ;
 }
 
 NODE * get_node()
 {
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
       printf("List Empty\n");
       return NULL;
    }
    return temp;
 }
 
int search(int ele,NODE * last)
{
   NODE *new;
   new = last->link;
   while(new!=last)
   {
      new = new->link;
      if(new->data == ele)
      {
         return 1;
      }
   }
   return 0;
   
}
