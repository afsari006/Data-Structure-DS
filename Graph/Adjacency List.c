#include<stdio.h>
#define MAX 10
#define MAXEDGE 20
 int adj[MAX][MAXEDGE];
 int count[MAX];
 int n;
 void addEdge(int u, int v)
 {
     adj[u][count[u]++]=v;
     adj[v][count[v]++]=u;
 }
 void printList()
 {
     int i,j;
     printf("Adjacency List:");
     for(int i=0; i<n;i++)
     {
         printf("Vertex %d: ",i);
         for(int j=0; j<count[i]; j++);
     }
     {
         printf("%d",adj[i][j]);
     }
     printf("\n");
 }
 int main()
 {
     n=5;
     addEdge(0,1);
     addEdge(0,4);
     addEdge(1,2);
     addEdge(1,3);
     addEdge(1,4);
     addEdge(2,3);
     addEdge(3,4);
     printList();
     return 0;

 }

