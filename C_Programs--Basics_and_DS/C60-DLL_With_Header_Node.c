//DLL With Header Node

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int count;
    char usn[10];
    char name[10];
    char dept[20];
    char design[20];
    int sal;
    int phno;
    struct node *llink;
    struct node *rlink;
}Node;

Node * get_node()
{
    Node *temp = (Node*)malloc(sizeof(Node));
    if(temp == NULL)
    {
        printf("No memory\n");
        return NULL;
    }
    return temp;
}
void insert_front(Node *head)
{
    Node *new = get_node();
    printf("Enter the details:usn,name,dept,design,sal,phno:\n");
    scanf("%s %s %s %s %d %d",(new->usn),(new->name),(new->dept),(new->design),&(new->sal),&(new->phno));
    if(head->rlink == NULL)
    {
        head->rlink = new;
        new->llink = head;
        (head->count)++;
        return ;
    }
    new->rlink = head->rlink;
    new->llink = head;
    head->rlink = new;
    (head->count)++;
}
void insert_rear(Node *head)
{
    Node *temp;
    Node *new = get_node();
    printf("Enter the details:usn,name,dept,design,sal,phno:\n");
    scanf("%s %s %s %s %d %d",(new->usn),(new->name),(new->dept),(new->design),&(new->sal),&(new->phno));
    if(head->rlink == NULL)
    {
        head->rlink = new;
        new->llink = head;
        (head->count)++;
        return ;
    }
    temp = head->rlink;
    while(temp->rlink!=NULL)
    {
        temp = temp->rlink;
    }
    temp->rlink = new;
    new->llink = temp;
    (head->count)++;
    return ;
}
void delete_front(Node *head)
{
    Node *temp,*next;
    if(head->rlink == NULL)
    {
        printf("Empty List\n");
        return ;
    }
    temp = head->rlink;
    if(temp->rlink == NULL)
    {
        printf("The deleted data is %s %s %s %s %d %d\n",(temp->usn),(temp->name),(temp->dept),(temp->design),(temp->sal),(temp->phno));
        free(temp);
        (head->count)--;
        head->rlink = NULL;
    }
    printf("The deleted data is %s %s %s %s %d %d\n",(temp->usn),(temp->name),(temp->dept),(temp->design),(temp->sal),(temp->phno));
    next = temp->rlink;
    head->rlink = next;
    next->llink = head;
    (head->count)--;
    return ;
}
void delete_rear(Node *head)
{
    Node *temp,*prev,*present;
    if(head->rlink == NULL)
    {
        printf("Empty List\n");
        return ;
    }
    temp = head->rlink;
    if(temp->rlink == NULL)
    {
        printf("The deleted data is %s %s %s %s %d %d\n",(temp->usn),(temp->name),(temp->dept),(temp->design),(temp->sal),(temp->phno));
        free(temp);
        head->rlink = NULL;
        (head->count)--;
        return ;
    }
    prev = head;
    present = head->rlink;
    while(present->rlink != NULL)
    {
        prev = present;
        present = present->rlink;
    }
    printf("The deleted data is %s %s %s %s %d %d\n",(present->usn),(present->name),(present->dept),(present->design),(present->sal),(present->phno));
    prev->rlink = NULL;
    free(present);
    (head->count)--;
}
void display(Node *head)
{
    Node *temp;
    printf("%d\n",head->count);
    for(temp=head->rlink;temp!=NULL;temp=temp->rlink)
    {
        printf("%s %s %s %s %d %d\n",(temp->usn),(temp->name),(temp->dept),(temp->design),(temp->sal),(temp->phno));
    }
}
int main()
{
    Node *head = get_node();
    head->count = 0;
    head->rlink = NULL;
    head->llink = NULL;
    
    int ch;
    for( ; ; )
    {
        printf("Enter\n1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Dlete at rear\n5.Display\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert_front(head);
                   break;
                   
            case 2:insert_rear(head);
                   break;
                   
            case 3:delete_front(head);
                   break;
                   
            case 4:delete_rear(head);
                   break;
                   
            case 5:display(head);
                   break;
                   
            case 6:exit(0);
        }
    }
  
}
