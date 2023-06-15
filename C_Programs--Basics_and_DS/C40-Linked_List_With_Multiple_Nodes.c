//Creating A Linked List With Multiple Nodes 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    char cdata[3];
    int idata;
    struct node *link;
}NODE;
 
NODE * get_node();

int main()
{
    NODE *first,*second,*third;
    first = get_node();
    strcpy(first->cdata,"ABC");
    first->idata = 12;
   
    second = get_node();
    strcpy(second->cdata,"DFE");
    second->idata = 13;
    first->link = second; 
    
  
    third = get_node();
    strcpy(third->cdata,"GHI");
    third->idata = 14;
    second->link = third;
    third->link = NULL;
    
    NODE *temp;
    for(temp = first;temp!= NULL ; temp = temp->link)
    {
        printf("%s %d\n",temp->cdata,temp->idata);
    }
    
    return 0;
}
NODE * get_node()
{
    NODE *temp;
    temp = (NODE*)malloc(sizeof(NODE));
    if(temp == NULL)
    {
        printf("No memory\n");
        return NULL;
    }
    return temp;
}
