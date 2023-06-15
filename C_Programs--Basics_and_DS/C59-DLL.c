//Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char usn[10];
    char name[10];
    char dept[10];
    char design[10];
    int salary;
    int phno;
    struct node *llink;
    struct node *rlink;
}Node;

Node *get_node();
Node *insert_front(Node *first);
Node * insert_rear(Node * first);
Node * delete_front(Node *first);
Node * delete_rear(Node *first);
void display(Node *first);

int main()
{
    Node * first = NULL;
    int ch,ele;
    for( ; ; )
    {
        printf("Enter\n1.Insert at front\n2.Insert at rear\n3.Delete at front\n4.Delete at rear\n5.Display\n6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:first = insert_front(first);
                   break;
                   
            case 2:first = insert_rear(first);
                   break;
                   
            case 3:first = delete_front(first);
                   break;
                   
            case 4:first = delete_rear(first);
                   break;
                   
            case 5:display(first);
                   break;
                   
            case 6:exit(0);
        }
    }
    return 0;
}
Node *get_node()
{
    Node * temp = (Node*)malloc(sizeof(Node));
    if(temp == NULL)
    {
        printf("No memory\n");
        return NULL;
    }
    return temp;
}
Node *insert_front(Node *first)
{
    Node *new = get_node();
    printf("Enter the details:usn,name,dept,design,salary,phno\n");
    scanf("%s %s %s %s %d %d",(new->usn),(new->name),(new->dept),(new->design),&(new->salary),&(new->phno));
    new->llink = NULL;
    new->rlink = NULL;
    if(first == NULL)
        return new;
    if(first->rlink == NULL)
    {
        new->rlink = first;
        first->llink = new;
        return new;
    }
    new->rlink = first;
    first->llink = new;
    return new;
}
Node * insert_rear(Node * first)
{
    Node *temp;
    Node *new = get_node();
    printf("Enter the details:usn,name,dept,design,salary,phno\n");
    scanf("%s %s %s %s %d %d",(new->usn),(new->name),(new->dept),(new->design),&(new->salary),&(new->phno));
    new->rlink = NULL;
    new->llink = NULL;
    if(first == NULL)
       return new;
    if(first->rlink == NULL)
    {
        first->rlink = new;
        new->llink = first;
        return first;
    }
    temp = first;
    while(temp->rlink!=NULL)
    {
        temp = temp->rlink;
    }
    temp->rlink = new;
    new->llink = temp;
    return first;
}
Node * delete_front(Node *first)
{
    Node *temp = get_node();
    if(first == NULL)
    {
        printf("Empty list\n");
        return NULL;
    }
    if(first->rlink == NULL)
    {
        printf("The deleted node is %s %s %s %s %d %d\n",(first->usn),(first->name),(first->dept),(first->design),(first->salary),(first->phno));
        free(first);
        return NULL;
    }
    temp = first;
    printf("The deleted node Is %s %s %s %s %d %d\n",(temp->usn),(temp->name),(temp->dept),(temp->design),(temp->salary),(temp->phno));
    free(temp);
    first = first->rlink;
    first->llink = NULL;
    return first;
}
Node * delete_rear(Node *first)
{
    Node *prev,*present;
    if(first== NULL)
    {
        printf("Empty List\n");
        return NULL;
    }
    if(first->rlink == NULL)
    {
        printf("The deleted node is %s %s %s %s %d %d\n",(first->usn),(first->name),(first->dept),(first->design),(first->salary),(first->phno));
        free(first);
        return NULL;
    }
    prev = NULL;
    present = first;
    while(present->rlink!=NULL)
    {
        prev = present;
        present = present->rlink;
    }
    prev->rlink = NULL;
    printf("The deleted node is %s %s %s %s %d %d\n",(present->usn),(present->name),(present->dept),(present->design),(present->salary),(present->phno));
    free(present);
    return first;
}
void display(Node *first)
{
    int count = 0;
    if(first == NULL)
    {
        printf("Empty List\n");
        return ;
    }
    Node *temp = first;
    while(temp!=NULL)
    {
        printf("%s %s %s %s %d %d\n",(temp->usn),(temp->name),(temp->dept),(temp->design),(temp->salary),(temp->phno));
        temp = temp->rlink;
        count++;
    }
    printf("The total number of nodes is %d\n",count);
}