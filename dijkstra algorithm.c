#include<stdio.h>
#define INF 999

void dijkstra(int n,int v,int cost[10][10],int dist[])
{
    int i,u,count,w,flag[10],min;
    for(i=0;i<n;i++)
    {
        flag[i]=0,dist[i]=cost[v][i];
    }
    count=1;
    while(count<n)
    {
        min=INF;
        for(w=0;w<n;w++)
        if(dist[w]<min && !flag[w])
        {
            min=dist[w];
            u=w;
        }
        flag[u]=1;
        count++;
        for(w=0;w<n;w++)
        {
            if((dist[u]+cost[u][w]<dist[w]) && !flag[w])
            {
                dist[w]=dist[u]+cost[u][w];
            }
        }
    }
}

int main()
    {

    int n,v,i,j,cost[10][10],dist[10];

    printf("\n Enter the number of nodes:");

    scanf("%d",&n);

     printf("\n Enter the cost matrix:");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {

        scanf("%d",&cost[i][j]);
        if(i!=j)
        {
            if(cost[i][j]==0)
            {
                cost[i][j]=INF;
            }
        }
    }

    printf("\nEnter the source node:");
    scanf("%d",&v);
    dijkstra(n,v,cost,dist);
    printf("\n Shortest path:\n");

    for(i=0;i<n;i++)
    {
        if(i!=v)
        {
            printf("%d -> %d , cost = %d \n",v,i,dist[i]);
        }
    }
    return 0;
}
