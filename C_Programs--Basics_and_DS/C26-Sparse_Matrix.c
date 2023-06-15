//Sparese Matrix

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100 

struct sparsematrix
{
    int row;
    int col;
    int val;
};
struct sparsematrix spm[SIZE];


int main()
{
    int nr,nc,nv=0,mat[SIZE][SIZE],i,j;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d",&nr,&nc);
    printf("Enter the elements\n");
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The entered matrix is:\n");
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    spm[0].row = nr;
    spm[0].col = nc;
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            if(mat[i][j] == 0)
               continue;
            else
            {
                nv++;
                spm[nv].row = i;
                spm[nv].col = j;
                spm[nv].val = mat[i][j];
            }
        }
    }
    spm[0].val = nv;
    
    printf("The <row,col,val> representation is:");
    printf("\trow\tcol\tval\n");
    for(i=0;i<nv;i++)
    {
        printf("%d\t%d\t%d\n",spm[i].row,spm[i].col,spm[i].val);
    }

    return 0;
}
