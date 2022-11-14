//试实现邻接矩阵存储图的深度优先遍历。


typedef struct GNode *PtrToGNode;
struct GNode{
    int Nv;  /* 顶点数 */
    int Ne;  /* 边数   */
    WeightType G[MaxVertexNum][MaxVertexNum]; /* 邻接矩阵 */
};
typedef PtrToGNode MGraph; /* 以邻接矩阵存储的图类型 */

#include <stdio.h>

typedef enum {false, true} bool;
#define MaxVertexNum 10  /* 最大顶点数设为10 */
#define INFINITY 65535   /* ∞设为双字节无符号整数的最大值65535*/
typedef int Vertex;      /* 用顶点下标表示顶点,为整型 */
typedef int WeightType;  /* 边的权值设为整型 */

typedef struct GNode *PtrToGNode;
struct GNode{
    int Nv;  /* 顶点数 */
    int Ne;  /* 边数   */
    WeightType G[MaxVertexNum][MaxVertexNum]; /* 邻接矩阵 */
};
typedef PtrToGNode MGraph; /* 以邻接矩阵存储的图类型 */
bool Visited[MaxVertexNum]; /* 顶点的访问标记 */

MGraph CreateGraph(); /* 创建图并且将Visited初始化为false；裁判实现，细节不表 */

void Visit( Vertex V )
{
    printf(" %d", V);
}

void DFS( MGraph Graph, Vertex V, void (*Visit)(Vertex) );


int main()
{
    MGraph G;
    Vertex V;

    G = CreateGraph();
    scanf("%d", &V);
    printf("DFS from %d:", V);
    DFS(G, V, Visit);

    return 0;
}

/* 你的代码将被嵌在这里 */

void DFS( MGraph Graph, Vertex V, void (*Visit)(Vertex) )
{
    //从顶点V开始进行访问
    Visited[V] = true;//V已经被访问，进行标记
    Visit(V);//打印V
//     循环遍历与V相连接并且顶点没有被访问
    for(int i=0;i<Graph->Nv;i++){
        if(Graph->G[V][i] == 1 && !Visited[i]){
            DFS(Graph,i,Visit);
        }
    }
}


//7-1 列出连通集
/*
  给定一个有N个顶点和E条边的无向图，请用DFS和BFS分别列出其所有的连通集。假设顶点从0到N−1编号。进行搜索时，假设我们总是从编号最小的顶点出发，按编号递增的顺序访问邻接点。
  输入第1行给出2个整数N(0<N≤10)和E，分别是图的顶点数和边数。随后E行，每行给出一条边的两个端点。每行中的数字之间用1空格分隔。
  按照"{ v 
1
​
  v 
2
​
  ... v 
k
​
  }"的格式，每行输出一个连通集。先输出DFS的结果，再输出BFS的结果。
*/

#include <iostream>
#include <queue>
using namespace std;

//定义数组的最大值
#define max 10
//无向图的数据类型
struct Graph{
    //顶点数和边数
    int Nv,Ne;
    //顶点集合
    int Vexs[max];
    //边
    int Edges[max][max];
};
//标记顶点是否被访问的数组
int Visited[max] = {0};

//创建图
void createGraph(struct Graph* g){
//     输入顶点数和边数
    cin>>g->Nv>>g->Ne;
//     初始化边
    for(int i=0;i<max;i++){
        for(int j=0;j<max;j++){
            g->Edges[i][j]=0;
        }
//         输入顶点
        g->Vexs[i] = i;
    }
    //输入数据
    int p1,p2;
    for(int i=0;i<g->Ne;i++){
        cin>>p1>>p2;
        g->Edges[p1][p2] = 1;
        g->Edges[p2][p1] = 1;
    }
}

//深度优先遍历
void DFS(struct Graph* g,int pos){
    //从pos位置开始遍历，说明pos位置已经访问过，进行标记
    Visited[pos] = 1;
    cout<<pos<<" ";
    for(int i=0;i<g->Nv;i++){
        //能够从pos到达，然后该顶点没有被访问
        if(g->Edges[i][pos] == 1 && Visited[i] == 0){
            //继续从i的位置调用深度优先的算法
            DFS(g,i);
        }
    }
}

//广度优先遍历
void BFS(struct Graph* g,int pos){
    //pos被访问进行标记
    Visited[pos] = 1;
    //将第一个位置进行入队
    queue<int> que;
    que.push(pos);
    while(!que.empty()){
        //将队列里面的第一个进行出队，并用变量接收
        int flag = que.front();
        que.pop();
        cout<<flag<<" ";
        for(int i=0;i<g->Nv;i++){
            //将pos能够到达的位置，进行标记，也就是找pos出度不为0的位置
            if(g->Edges[i][flag] == 1 && Visited[i] == 0){
                Visited[i] = 1;
                que.push(i);
            }
        }
    }
}

int main(){
    
    struct Graph* g = new struct Graph;
    //创建图
    createGraph(g);
    //深度优先
    for(int i=0;i<g->Nv;i++){
        if(Visited[i] == 0){
            cout<<"{ ";
            DFS(g,i);
            cout<<"}"<<endl;
        }
    }
    //重置标记数组
    for(int i=0;i<max;i++){
        Visited[i]=0;
    }
    
    //广度优先
    for(int i=0;i<g->Nv;i++){
        if(Visited[i] == 0){
            cout<<"{ ";
            BFS(g,i);
            cout<<"}"<<endl;
        }
    }
    
    return 0;
}
