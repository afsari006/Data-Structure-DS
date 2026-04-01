#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Edge {
    int u, v, weight;
};

struct Edge edges[MAX];
int parent[MAX];
int edgeCount, n;

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unionSets(int a, int b) {
    parent[find(a)] = find(b);
}

int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}


void addEdge(int u, int v, int w) {
    edges[edgeCount].u      = u;
    edges[edgeCount].v      = v;
    edges[edgeCount].weight = w;
    edgeCount++;
}

void kruskalMST() {

    for (int i = 0; i < n; i++) parent[i] = i;

    qsort(edges, edgeCount, sizeof(struct Edge), compare);

    printf("Kruskal's MST:\n");
    printf("Edge\t\tWeight\n");

    int totalCost = 0;
    int edgesUsed = 0;

    for (int i = 0; i < edgeCount; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].weight;

        if (find(u) != find(v)) {
            unionSets(u, v);
            printf("%d -- %d\t\t%d\n", u, v, w);
            totalCost += w;
            edgesUsed++;

            if (edgesUsed == n - 1) break;
        } else {
            printf("%d -- %d\t\tSkipped (cycle)\n", u, v);
        }
    }

    printf("Total MST Weight = %d\n", totalCost);
}

int main() {
    n = 5;
    edgeCount = 0;

    addEdge(0, 1, 2);
    addEdge(1, 2, 3);
    addEdge(0, 3, 6);
    addEdge(1, 3, 8);
    addEdge(1, 4, 5);
    addEdge(2, 4, 7);
    addEdge(3, 4, 9);

    kruskalMST();
    return 0;
}
