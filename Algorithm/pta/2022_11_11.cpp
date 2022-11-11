//判断是否为拓扑排序，每周一侧第十次
bool IsTopSeq( LGraph Graph, Vertex Seq[] ) {
	int a[1000];//用来储存节点是否输出过的数组
	for(int i=0; i<1000; i++){
        a[i]=0;//初始化为0.表明节点都没输出过
    }
	PtrToAdjVNode p;//
	for(int i=0; i<Graph->Nv; i++){//遍历输入的序列
        Seq[i]--;//数组下表是从0开始的，但是输入的节点数是从1开始的
		for(int j=0; j<Graph->Nv; j++){//遍历图的邻接链表
            if(!(a[j] == 1 || j == Seq[i])){//如果当前节点没输出过，或者和要判断的序列节点不相同
                p=Graph->G[j].FirstEdge;
				while(p){
                    if(p->AdjV==Seq[i])
						return false;
					p=p->Next;
                }
            }
        } 
		a[Seq[i]]=1;
    }
	return true;
}

LGraph ReadG()
{
    int i;
    LGraph LG = (LGraph)malloc(sizeof(GNode));
	for(int j=0;j<10;j++)
		LG->G[j].FirstEdge=NULL;
    scanf("%d %d", &LG->Nv, &LG->Ne);
    for(i = 0; i < LG->Ne; ++i)
    {
        int p1, p2;
        PtrToAdjVNode adj = (AdjVNode *)malloc(sizeof(AdjVNode));
        scanf("%d %d", &p1, &p2);
		p1--;p2--;  //注意这里，他输入后都减了1！！！
        adj->AdjV = p2;
        adj->Next = NULL;
        if(LG->G[p1].FirstEdge == NULL)
        {
            LG->G[p1].FirstEdge = adj;
        }
        else
        {
            adj->Next = LG->G[p1].FirstEdge;
            LG->G[p1].FirstEdge = adj;
        }
    }
    return LG;
}
#include <stdio.h>
#include <stdlib.h>

typedef enum {false, true} bool;
#define MaxVertexNum 10  /* maximum number of vertices */
typedef int Vertex;      /* vertices are numbered from 1 to MaxVertexNum */

typedef struct AdjVNode *PtrToAdjVNode; 
struct AdjVNode{
    Vertex AdjV;
    PtrToAdjVNode Next;
};

typedef struct Vnode{
    PtrToAdjVNode FirstEdge;
} AdjList[MaxVertexNum];

typedef struct GNode *PtrToGNode;
struct GNode{  
    int Nv;
    int Ne;
    AdjList G;
};
typedef PtrToGNode LGraph;

LGraph ReadG(); /* details omitted */

bool IsTopSeq( LGraph Graph, Vertex Seq[] );

int main()
{
    int i, j, N;
    Vertex Seq[MaxVertexNum];
    LGraph G = ReadG();
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        for (j=0; j<G->Nv; j++)
            scanf("%d", &Seq[j]);
        if ( IsTopSeq(G, Seq)==true ) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}

/* Your function will be put here */
typedef struct AdjVNode *PtrToAdjVNode; 
struct AdjVNode{
    Vertex AdjV;
    PtrToAdjVNode Next;
};

typedef struct Vnode{
    PtrToAdjVNode FirstEdge;
} AdjList[MaxVertexNum];

typedef struct GNode *PtrToGNode;
struct GNode{  
    int Nv;
    int Ne;
    AdjList G;
};
typedef PtrToGNode LGraph;


//第K大整数----数据结构第五次实验
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int n,k,num;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    cout<<v[n-k]<<endl;
//     for(vector<int>::iterator it = v.begin();it!=v.end();it++){
//         cout<<*it<<" ";
//     }
}


//动态规划：数字三角形问题----数据结构第五次实验
#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int n;
    cin >> n;
    int pd[50][50];
    int num[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cin >> num[i][j];
            pd[i][j] = num[i][j];
        }
    }
// 从倒数第二行开始，每个点的最大值是最下面和左边的最大值
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            pd[i][j] = max(num[i][j] + pd[i + 1][j], num[i][j] + pd[i + 1][j + 1]);
        }
    }
//     从第二行开始，找比较大的一个，如果是比较大的是在右边那一个就另j++
    cout << pd[0][0] << "[" << num[0][0] << "-->";
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (pd[i][j] > pd[i][j + 1]) {
            cout << num[i][j];
        }
        else {
            cout << num[i][j + 1];
            j++;
        }
        if (i != n - 1) {
            cout << "-->";
        }
    }
    cout << "]" << endl;

    return 0;
}
