//Addition Of Two Polynomial Using Singly Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int coeff;
    int expon;
    struct node * link;
}NODE;

NODE *create(NODE *first);
NODE *insert_rear(NODE *first,int coeff,int expon);
NODE *get_node();
void polyadd(NODE *first1,NODE *first2);
void display(NODE *first3);

int main()
{
    NODE *first1 = NULL;
    NODE *first2 = NULL;
    printf("Enter the first polynimial\n");
    first1 = create(first1);
    printf("Enter the second polynomial\n");
    first2 = create(first2);
    polyadd(first1,first2);
    return 0;
}

NODE *create(NODE *first)
{
    int n,coeff,expon,i;
    printf("Enter the number of terms of the polynomial\n");
    scanf("%d",&n);
    printf("Enter the %d terms\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter the coeffecient and exponent of the %d term in descending order\n",i+1);
        scanf("%d %d",&coeff,&expon);
        first = insert_rear(first,coeff,expon);
    }
    return first;
}
NODE *insert_rear(NODE *first,int coeff,int expon)
{
    NODE *temp = get_node();
    temp->coeff = coeff;
    temp->expon = expon;
    temp->link = NULL;
    if(first == NULL)
       return temp;
    if(first->link == NULL)
    {
        first->link = temp;
        return first;
    }
    NODE *tent = first;
    while(tent->link != NULL) //tent goes till last but one
       tent = tent->link;     //new tent is tent->link --- hence last one is reached
    tent->link = temp;
    return first;
}
NODE *get_node()
{
    NODE *temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
        printf("No Memory\n");
        return NULL;
    }
    return temp;
}
void polyadd(NODE *first1,NODE *first2)
{
    NODE *ptr1 = first1;
    NODE *ptr2 = first2;
    NODE *first3 = NULL; //Creating a linked list for the sum
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->expon == ptr2->expon)
        {
            first3 = insert_rear(first3,(ptr1->coeff+ptr2->coeff),ptr1->expon);
            ptr1 = ptr1->link; //moving the pointers to the next term
            ptr2 = ptr2->link;
        }
        else if(ptr1->expon > ptr2->expon)
        {
            first3 = insert_rear(first3,ptr1->coeff,ptr1->expon);
            ptr1 = ptr1->link;
        }
        else if(ptr1->expon < ptr2->expon)
        {
            first3 = insert_rear(first3,ptr2->coeff,ptr2->expon);
            ptr2 = ptr2->link;
        }
    }
    while(ptr1!=NULL)
    {
        first3 = insert_rear(first3,ptr1->coeff,ptr1->expon);
        ptr1 = ptr1->link;
    }
    while(ptr2!=NULL)
    {
        first3 = insert_rear(first3,ptr2->coeff,ptr2->expon);
        ptr2 = ptr2->link;
    }
    printf("The resultant sum of the two polynomials is\n");
    display(first3);
}
void display(NODE *first3)
{
    NODE *temp = first3;
    while(temp!=NULL)
    {
        printf("%d\t%d\n",temp->coeff,temp->expon);
        temp = temp->link;
    }
}


