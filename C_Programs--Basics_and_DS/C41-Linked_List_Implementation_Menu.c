//Linked List Implementation 

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * link;
}NODE;

NODE * get_node();
NODE * insert_front(int ele,NODE * first);
NODE * insert_rear(int ele,NODE * first);
NODE * delete_front(NODE * first);
NODE * delete_rear(NODE * first);
void display(NODE *first);
int search(int ele,NODE * first);

int main()
{
    int ch,ele,flag;
    NODE * first = NULL;
    for( ; ; )
    {
       printf("Enter\n1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete at rear\n5.Search for an element\n6.Display\n7.Exit\n");
       scanf("%d",&ch);
       switch(ch)
       {
           case 1:printf("Enter the element to be inserted\n");
                 scanf("%d",&ele);
                 first = insert_front(ele,first);
                 break;
        
           case 2:printf("Enter the element to be inserted\n");
                  scanf("%d",&ele);
                  first = insert_rear(ele,first);
                  break;
        
           case 3:first = delete_front(first);
                  break;
        
           case 4:first = delete_rear(first);
                  break;
               
           case 5:if(first == NULL)
                  {
                      printf("EMPTY LIST\n");
                      break;
                  }
                  printf("Enter the element to be searched\n");
                  scanf("%d",&ele);
                  flag = search(ele,first);
                  if(flag == 1)
                     printf("Search Successful\n");
                  else
                     printf("Search Unsuccessful\n");
                  break;
               
           case 6:display(first);
                  break;
                
           case 7:exit(0);
        }//switch
    }//for
    return 0;
}//main
NODE * get_node()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
        printf("NO MEMORY\n");
        return NULL;
    }
}

NODE * insert_front(int ele,NODE * first)
{
    NODE *temp;
    temp = get_node();
    temp->data = ele;
    temp->link = NULL;
    if(first == NULL)
       return temp;     //If no nodes then the entered node/data(i.e temp in this case) becomes the frst node 
    temp->link = first; //For one or more nodes case 
    return temp;
}

NODE * insert_rear(int ele,NODE * first)
{
    NODE *temp,*tent;
    temp = get_node();
    temp->data = ele;
    temp->link = NULL;
    if(first == NULL)
       return temp;
    else if(first->link == NULL)
    {
        first->link = temp;
        return first;
    }
    tent = first;
    while(tent->link != NULL)
    {
        tent = tent->link;
    }
    tent->link = temp;
    return first;
}

NODE * delete_front(NODE * first)
{
    NODE *temp;
    if(first == NULL)
    {
        printf("EMPTY LIST\n");
        return NULL;
    }
    temp = first;
    first = first->link;
    printf("The deleted element is %d\n",temp->data);
    return first;
}

NODE * delete_rear(NODE * first)
{
    NODE *temp,*prev,*present;
    if(first == NULL)
    {
        printf("LIST EMPTY\n");
        return NULL;
    }
    else if(first->link == NULL)
    {
        temp = first;
        first = first->link;
        printf("The deleted node is %d\n",temp->data);
        return first; //OR return NULL is the same
    }
    prev = NULL;
    present = first;
    while(present->link != NULL)
    {
        prev = present;
        present = present->link;
    }
    printf("The deleted element is %d\n",present->data);
    free(present);
    prev->link = NULL;
    return first;
}

void display(NODE *first)
{
    if(first == NULL)
    {
        printf("EMPTY LIST\n");
        return ;
    }
    NODE *temp;
    for(temp=first ; temp!=NULL ; temp=temp->link)
    {
        printf("%d\t",temp->data);
    }
    printf("\n"); //just for allignment 
    return ;
}

int search(int ele,NODE * first)
{
    NODE *temp;
    temp = first;
    while(temp!=NULL)
    {
        if(temp->data == ele)
           return 1;
        temp=temp->link;
    }
    return 0;
}
