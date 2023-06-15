//Basic Linked List Implementation

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char data[3];
    struct node *link;
}NODE;

int main()
{
    NODE *first = NULL;
    NODE *second = NULL;
    NODE *third = NULL; 

    first=(NODE*)malloc(sizeof(NODE));
    second=(NODE*)malloc(sizeof(NODE));
    third=(NODE*)malloc(sizeof(NODE));

    strcpy(first->data, "CAT");
    strcpy(second->data, "MAT");
    strcpy(third->data, "RAT");

    first->link=second;
    second->link=third;
    third->link=NULL;

    printf("%s\t", first->data);
    printf("%s\t", second->data);
    printf("%s",third->data);
    
    return 0;
}