//Code To Perform BFS Traveral 

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void BFS(int n,int AM[][SIZE],int vis[],int src);

int main()
{
    int vis[SIZE],AM[SIZE][SIZE],i,j,n,src;
    printf("Enter the number of vertices\n");
    scanf("%d",&n);
    printf("Enter the adjacency matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the value at row %d and column %d\n",(i+1),(j+1));
            scanf("%d",&AM[i][j]);
        }
    }
    printf("Enter the source vertex\n");
    scanf("%d",&src);
    for(i=0;i<n;i++)
    {
        vis[i] = 0;
    }
    BFS(n,AM,vis,src);
    for(i=0;i<n;i++)
    {
        if(vis[i] == 1)
            printf("The vertex %d is reachable from source %d\n",i+1,src);
        else
            printf("The vertex %d is not reachable from source %d\n",i+1,src);
    }
}

void BFS(int n,int AM[][SIZE],int vis[],int src)
{
    int u,v,f=0,r=0,queue[SIZE];
    queue[r] = src;
    vis[src] = 1;
    while(f<=r)
    {
        u = queue[f++];
        for(v=0;v<n;v++)
        {
            if(AM[u][v] == 1 && vis[v]==0)
            {
                queue[++r] = v;
                vis[v] = 1;
            }
        }

    }

}