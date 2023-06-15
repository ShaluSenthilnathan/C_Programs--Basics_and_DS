// WAP To Implement Insertion And Traversal On Preorder , Postorder And Inorder on BST 

#include <stdio.h>
#include <stdlib.h>

typedef struct BST
{
    int data;
    struct BST *llink;
    struct BST *rlink;
}Tnode;

Tnode *getnode()
{
    Tnode *temp;
    temp = (Tnode*)malloc(sizeof(Tnode));
    if(temp == NULL)
    {
        printf("NO MEMORY\n");
        return NULL;
    }
    return temp;
}

Tnode * insert(int ele,Tnode *root)
{
    Tnode *present;
    Tnode *prev = NULL;
    Tnode * new = getnode();
    new->data = ele;
    new->llink = new->rlink = NULL;
    if(root == NULL)
       return new;
    present = root;
    while(present!=NULL)
    {
        prev = present;
        if(new->data < present->data)
           present = present->llink;
        else
           present = present->rlink;
    }
    if(new->data < prev->data)
    {
        prev->llink = new;
           return root;
    }
    else
    {
        prev->rlink = new;
        return root;
    }
}
void inorder(Tnode * root)
{
    if(root!=NULL)
    {
        inorder(root->llink);
        printf("%d\t",root->data);
        inorder(root->rlink);
    }
}
void preorder(Tnode * root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->data);
        preorder(root->llink);
        preorder(root->rlink);
    }
}
void postorder(Tnode * root)
{
    if(root!=NULL)
    {
        postorder(root->llink);
        postorder(root->rlink);
        printf("%d\t",root->data);
    }
}
int search(Tnode *root,int ele)
{
    while(root!=NULL)
    {
        if(root->data == ele)
           return 1;
        if(ele < root->data)
           root = root->llink;
        else
           root = root->rlink;
    }
    return -1;
}

int main()
{
    int ch,ele,res;
    Tnode *root = NULL;
    for( ; ; )
    {
        printf("\nEnter 1.Insertion 2.Preorder 3.Postorder 4.Inorder 5.Search 6.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the element\n");
                   scanf("%d",&ele);
                   root = insert(ele,root);
                   break;
                   
            case 2:preorder(root);
                   break;
                   
            case 3:postorder(root);
                   break;
                   
            case 4:inorder(root);
                   break;
                   
            case 5: if(root == NULL)
                    {
                        printf("There are no nodes in the tree\n");
                        break;
                    }
                    printf("Enter the element to be searched\n");
                    scanf("%d",&ele);
                    res = search(root,ele);
                    if(res == 1)
                        printf("Element found!\n");
                    else
                       printf("Element not found\n");
                    break;
                    
            case 6:exit(0);
        }
    }
    return 0;
}