#include<stdio.h>
#define MAX 10
 int adj[MAX][MAX];
 int visited[MAX];
 int stack[MAX];
 int n,top;
 void push(int v)
 {
     stack[top++]=v;
 }
 int pop()
 {
     return stack[--top];
 }
 int isEmptyStack()
 {
     return top==0;
 }
 void addEdge(int u, int v)
 {
     adj[u][v]=1;
     adj[v][u]=1;
 }
 void DFS(int start)
 {
     top=0;
     push(start);
     visited[start]=1;
     printf("DFS Traversal:");
     while(!isEmptyStack())
     {
         int node=pop();
         printf("%d",node);
         for(int i=0; i<n;i++)
         {
             if(adj[node][i]==1 && visited[i]==0)
             {
                 visited[i]=1;
                 push(i);
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
     DFS(0);
     return 0;

 }



