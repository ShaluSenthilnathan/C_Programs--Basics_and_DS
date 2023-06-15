/*Code To : 1.Calculate In-degree And Out-degree Of Directed Graph
            2.Calculate Max Degree Of Undirected Graph
            3.Print the graph(Adjacency Matrix Representation)
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void directed(int v,int graph[][SIZE]);
void printgraph(int v,int graph[][SIZE]);
int  undirected(int v,int graph[][SIZE]);

int main()
{
    int graph[SIZE][SIZE],v,ch,res;
    for( ; ; )
    {
        printf("Enter your choice:\n");
        printf("1.Directed Graph\n2.Undirected Graph\n3.Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the number of vertices\n");
                   scanf("%d",&v);
                   directed(v,graph);
                   printgraph(v,graph);
                   break;
                   
            case 2:printf("Enter the number of vertices\n");
                   scanf("%d",&v);
                   res = undirected(v,graph);
                   printf("The max degree of the graph is %d\n",res);
                   printgraph(v,graph);
                   break;
                   
            case 3:exit(0);
        }
    }
    return 0;
}

void directed(int v,int graph[][SIZE])
{
    int i,j,indegree[SIZE]={0},outdegree[SIZE]={0};
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("Enter the value at row %d and column %d\n",(i+1),(j+1));
            scanf("%d",&graph[i][j]);
            if(graph[i][j]>0)
            {
                outdegree[i]++;
                indegree[j]++;
            }
        }
    }
    for(i=0;i<v;i++)
    {
        printf("The indegree of %d is %d\n",(i+1),indegree[i]);
        printf("The outdegree of %d is %d\n",(i+1),outdegree[i]);
    }
}

int undirected(int v,int graph[][SIZE])
{
    int i,j,maxdegree=0,count[SIZE]={0};
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("Enter the value at row %d and column %d\n",(i+1),(j+1));
            scanf("%d",&graph[i][j]);
            if(graph[i][j]>0)
            {
                count[j]++;
            }
        }
    }
    for(j=0;j<v;j++)
    {
        if(count[j]>maxdegree)
        {
            maxdegree = count[j];
        }
    }
    return maxdegree;
}

void printgraph(int v,int graph[][SIZE])
{
    int i,j;
    for(i=0;i<v;i++)
    {
        for(j=0;j<v;j++)
        {
            printf("%d",graph[i][j]);
        }
        printf("\n");
    }
}