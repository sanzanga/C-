
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
struct edge
{
    int vs;
    int ve;
};
typedef struct edge* Edge;
struct graph //�ڽӾ���洢ͼ
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
    //�ж�ͼ�Ƿ���ͨ
    DFS(G, 0); //�����������DFS����ͼ
    for (i = 0; i < N; i++)
    {
        if (Visited[i] == 0) { yes = 0; break; }//�Ƿ���δ���ʵĽ��
    }
    if (i == N)
    {
        //�жϸ����Ķ��Ƿ��Ϊż��
        yes = 1;
        int j;
        int du = 0;//��¼���Ķ�
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
Graph CreateGraph(int N) //����ͼ
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
void DFS(Graph G, int i) //���������������
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