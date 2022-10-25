//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//typedef struct HTNode {
//    int weight;
//    int parent, lchild, rchild;
//}HTNode,*Huff;
//
//void Select(HTNode* tree, int &pos1, int &pos2,int n) {
//    int min = 0;
//    for (int i = 1; i <= n; i++) {
//        if (tree[i].parent == 0) {
//            min = i; break;
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        if (tree[i].parent == 0) {
//            if (tree[i].weight < tree[min].weight) {
//                min = i;
//            }
//        }
//    }
//    pos1 = min;
//    for (int i = 1; i <= n; i++) {
//        if (tree[i].parent == 0 && i != pos1) {
//            min = i; break;
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        if (tree[i].parent == 0 && i != pos1) {
//            if (tree[i].weight < tree[min].weight) {
//                min = i;
//            }
//        }
//    }
//    pos2 = min;
//}
//
//void CreateTree(HTNode* &tree, int n) {
//    if (n <= 1) {
//        return;
//    }
//    int m = 2 * n - 1;
//    tree = new HTNode[m + 1];
//    for (int i = 1; i <= m; i++) {
//        tree[i].parent = 0;
//        tree[i].lchild = 0;
//        tree[i].rchild = 0;
//        tree[i].weight = 0;
//    }
//    for (int i = 1; i <= n; i++) {
//        cin >> tree[i].weight;
//    }
//
//    for (int i = n + 1; i <= m; i++) {
//        int pos1 = 0;
//        int pos2 = 0;
//        Select(tree, pos1, pos2,i - 1);
//        tree[pos1].parent = i; tree[pos2].parent = i;
//        tree[i].lchild = pos1;
//        tree[i].rchild = pos2;
//        tree[i].weight = tree[pos1].weight + tree[pos2].weight;
//    }
//}
//
//int wpl(Huff tree, int n) {
//    int sum = 0; int num1 = 0; int num2 = 0;
//    for (int i = 1; i <= n; i++) {
//        num1 = tree[i].parent;
//        num2 = 0;
//        while (num1 != 0) {
//            num2++;
//            num1 = tree[num1].parent;
//        }
//        /*for (num2 = 0; num1 != 0; num1 = tree[num1].parent) {
//            num2++;
//        }*/
//        sum += tree[i].weight * num2;
//    }
//    return sum;
//}
//
//int main() {
//
//    int n;
//    cin >> n;
//    HTNode* tree;
//    CreateTree(tree, n);
//
//    int ret = wpl(tree, n);
//    cout << ret << endl;
//
//    return 0;
//}



#include <iostream>
#include <stdlib.h>
using namespace std;

struct AMGraph {
	int vexs[1000];
	int arr[1000][1000];
	int vexnum, arcnum;//顶点边数
};

void CreateUDN(struct AMGraph* graph) {
	int num1, num2;
	for (int i = 0; i < graph->vexnum; i++) {
		graph->vexs[i] = i + 1;
	}
	for (int i = 0; i < graph->arcnum; i++) {
		cin >> num1 >> num2;
		graph->arr[num1 - 1][num2 - 1] = 1;
		graph->arr[num2 - 1][num1 - 1] = 1;
	}
}

void DFS(struct AMGraph* graph, int i, int* visited) {
	visited[i] = 1;
	for (int j = 0; j < graph->vexnum; j++) {
		if (graph->arr[i][j] == 1 && visited[j] == 0) {
			DFS(graph, j,visited);
		}
	}
}

bool isOuLaHuiLu(struct AMGraph* graph,int* visited) {
	//判断图是否联通
	DFS(graph, 0, visited);
	bool flag = true;
	for (int i = 0; i < graph->vexnum; i++) {
		if (visited[i] == 0) {
			return false;
		}
	}
	flag = true;
	if (flag) {
		for (int i = 0; i < graph->vexnum; i++) {
			int sum = 0;
			for (int j = 0; j < graph->vexnum; j++) {
				if (graph->arr[i][j] == 1) {
					sum++;
				}
			}
			if (sum % 2 != 0) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	int n, m;
	cin >> n >> m;
	struct AMGraph* graph = new struct AMGraph;
	graph->vexnum = n;
	graph->arcnum = m;
	CreateUDN(graph);
	int visited[1000];
	for (int i = 0; i < graph->vexnum; i++) {
		visited[i] = 0;
	}
	bool ret = isOuLaHuiLu(graph,visited);
	if (ret) {
		cout << 1 << endl;
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}