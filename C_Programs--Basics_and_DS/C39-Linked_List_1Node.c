//Creating A Linked List With One Node 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char cdata[3];
    int idata;
    struct node * link;
}NODE;

int main()
{
    NODE *first = NULL;                     //Step-1 : Create a node with memeory space null
    
    first = (NODE *)malloc(sizeof(NODE));  //Step-2 : Allocate dynamic memory to it 
    
    strcpy(first->cdata,"CAT");            //Step-3 : Store data into the node 
    first->idata = 12;
    
    first->link = NULL;                   //Step-4 : Link the node 
    
    printf("The contents of the node are %s & %d\n",first->cdata,first->idata);   //Prinitng the contents of the node 
    
    return 0;
    
}