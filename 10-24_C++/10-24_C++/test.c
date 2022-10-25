
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct edge
{
    int vs;
    int ve;
};
typedef struct edge* Edge;
struct graph //邻接矩阵存储图
{
    int Nv;
    int Ne;
    int** M;
};
typedef struct graph* Graph;
Graph CreateGraph(int N);
void DFS(Graph G, int i);
int* Visited;
int main()
{
    int i;
    int N, M;
    scanf("%d %d", &N, &M);
    Visited = (int*)malloc(N * sizeof(int));
    for (i = 0; i < N; i++)
    {
        Visited[i] = 0;
    }
    Graph G;
    G = CreateGraph(N);
    G->Ne = M;
    int v1, v2;
    int yes;
    Edge* e;
    e = (Edge*)malloc(M * sizeof(Edge));
    for (i = 0; i < M; i++)
    {
        e[i] = (Edge)malloc(sizeof(struct edge));
    }
    for (i = 0; i < M; i++)
    {
        scanf("%d %d", &v1, &v2);
        e[i]->vs = v1 - 1;
        e[i]->ve = v2 - 1;
        G->M[v1 - 1][v2 - 1] = 1;
        G->M[v2 - 1][v1 - 1] = 1;
    }
    //判断图是否连通
    DFS(G, 0); //深度优先搜索DFS遍历图
    for (i = 0; i < N; i++)
    {
        if (Visited[i] == 0) { yes = 0; break; }//是否有未访问的结点
    }
    if (i == N)
    {
        //判断各结点的度是否均为偶数
        yes = 1;
        int j;
        int du = 0;//记录结点的度
        for (i = 0; i < N; i++)
        {
            du = 0;
            for (j = 0; j < N; j++)
            {
                if (G->M[i][j] == 1)
                {
                    du++;
                }
            }
            if (du % 2 == 1)
            {
                yes = 0;
                break;
            }

        }
    }
    if (yes == 1) { printf("1"); }
    else { printf("0"); }
    return 0;
}
Graph CreateGraph(int N) //创建图
{
    int i, j;
    Graph G;
    G = (Graph)malloc(sizeof(struct graph));
    G->Nv = N;
    G->M = (int**)malloc(N * sizeof(int*));
    for (i = 0; i < N; i++)
    {
        G->M[i] = (int*)malloc(N * sizeof(int));
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            G->M[i][j] = 0;
        }
    }
    return G;
}
void DFS(Graph G, int i) //深度优先搜索遍历
{
    int j;
    Visited[i] = 1;
    for (j = 0; j < G->Nv; j++)
    {
        if (G->M[i][j] == 1 && Visited[j] == 0)
        {
            DFS(G, j);
        }
    }
}