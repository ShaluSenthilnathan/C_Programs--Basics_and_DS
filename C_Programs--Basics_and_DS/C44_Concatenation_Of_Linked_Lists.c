//Concatenation Of A Linear Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node * link;
}NODE;

void concat_list(NODE *first1,NODE *first2);
void display(NODE *first1);
NODE *get_node();
NODE * insert_rear(int ele,NODE *first);


int main()
{
    int n1,n2,i,ele;
    NODE *first1 = NULL;
    NODE *first2 = NULL;
    printf("Enter number of elements of the first list\n");
    scanf("%d",&n1);
    printf("Enter the %d elements of the first list\n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&ele);
        first1 = insert_rear(ele,first1);
    }
    printf("Enter number of elements of the second list\n");
    scanf("%d",&n2);
    printf("Enter the %d elements of the second list\n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&ele);
        first2 = insert_rear(ele,first2);
    }
    concat_list(first1,first2);
    return 0;
}
void concat_list(NODE *first1,NODE *first2)
{
    NODE *temp = get_node();
    temp = first1;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = first2;
    display(first1);
    return ;
}

void display(NODE *first1)
{
    NODE *temp = get_node();
    if(first1 == NULL)
    {
        printf("The list is empty\n");
        return ;
    }
    for(temp=first1;temp!=NULL;temp=temp->link)
    {
        printf("%d\t",temp->data);
    }
    return ;
}

NODE *get_node()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
        printf("NO memory\n");
        return NULL;
    }
    return temp;
}

NODE * insert_rear(int ele,NODE *first)
{
    NODE *temp = get_node();
    temp->data = ele;
    temp->link = NULL;
    if(first == NULL)
    {
        return temp;
    }
    else if(first->link == NULL)
    {
        first->link = temp;
        return first;
    }
    NODE *tent;
    tent = first;
    while(tent->link!=NULL)
    {
        tent = tent->link;
    }
    tent->link = temp;
    return first;
    
}
