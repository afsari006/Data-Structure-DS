#include<stdio.h>
#define MAX 10
 int adj[MAX][MAX];
 int visited[MAX];
 int queue[MAX];
 int n,front, rear;
 void enqueue(int v)
 {
     queue[rear++]=v;
 }
 int dequeue()
 {
     return queue[front++];
 }
 int isEmpty()
 {
     return front==rear;
 }
 void addEdge(int u, int v)
 {
     adj[u][v]=1;
     adj[v][u]=1;
 }
 void BFS(int start)
 {
     front=rear=0;
     visited[start]=1;
     enqueue(start);
     printf("BFS Traversal:");
     while(!isEmpty())
     {
         int node=dequeue();
         printf("%d",node);
         for(int i=0; i<n;i++)
         {
             if(adj[node][i]==1 && visited[i]==0)
             {
                 visited[i]=1;
                 enqueue(i);
             }
         }
     }
     printf("\n");
 }
 int main()
 {
     n=8;
     addEdge(0,1);
     addEdge(0,4);
     addEdge(1,2);
     addEdge(1,3);
     addEdge(1,4);
     addEdge(2,3);
     addEdge(3,4);
     BFS(0);
     return 0;

 }


