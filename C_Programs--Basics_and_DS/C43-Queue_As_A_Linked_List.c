//Implementation Of A Queue As A Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}NODE;

NODE *get_node();
NODE * insert(int ele,NODE * first);
NODE *delete(NODE * first);
void display(NODE *first);

int main()
{
    int ch,ele;
    NODE *first = NULL;
    for( ; ; )
    {
        printf("Enter\n1.Insert at rear\n2.Delete at front\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element you want to insert\n");
                   scanf("%d",&ele);
                   first = insert(ele,first);
                   break;
                   
            case 2:first = delete(first);
                   break;
                   
            case 3:display(first);
                   break;
                   
            case 4:exit(0);
        }
    }
    return 0;
}

NODE *get_node()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
        printf("NO MEMORY\n");
        return NULL;
    }
    return temp;
}

NODE * insert(int ele,NODE * first)
{
    NODE *temp;
    temp = get_node();
    temp->data = ele;
    temp->link = NULL;
    if(first== NULL)
       return temp;
    else if(first->link == NULL)
    {
        first->link = temp;
        return  first;
    }
    NODE *tent;
    tent = first;
    while(tent->link != NULL)
    {
        tent = tent->link;
    }
    tent->link = temp;
    return first;
}

NODE *delete(NODE * first)
{
    NODE *temp;
    if(first == NULL)
    {
        printf("EMPTY LIST\n");
        return NULL;
    }
    
    temp = first;
    printf("The deleted element is %d\n",temp->data);
    first = first->link;
    return first; //Same as returning NULL
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
       printf("%d\t",temp->data);
    printf("\n");
}