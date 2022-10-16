#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
//struct Queue {
//	int* data;
//	int font;
//	int rear;
//	int MaxSize;
//};
//
//void InitiQue(struct Queue* queue,int n) {
//	queue->data = (int*)malloc(sizeof(int) * n);
//	queue->font = 0;
//	queue->rear = 0;
//	queue->MaxSize = n;
//}
//
//void Push(struct Queue* queue,int num) {
//	queue->data[queue->rear++] = num;
//}
//
//int Pop(struct Queue* queue) {
//	return queue->data[queue->font++];
//}
//
//int main() {
//
//	int n, num, count = 0;
//	scanf("%d",&n);
//
//	struct Queue* queueA = (struct Queue*)malloc(sizeof(struct Queue));
//	struct Queue* queueB = (struct Queue*)malloc(sizeof(struct Queue));
//	InitiQue(queueA, n);
//	InitiQue(queueB, n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &num);
//		if (num % 2 != 0) {
//			Push(queueA, num);
//		}
//		else {
//			Push(queueB, num);
//		}
//	}
//
//	while (queueA->font!=queueA->rear&&queueB->font!=queueB->rear) {
//		printf("%d ", Pop(queueA));
//		count++;
//		printf("%d ", Pop(queueA));
//		count++;
//		printf("%d ", Pop(queueB));
//		count++;
//	}
//	while (queueA->font != queueA->rear) {
//		if (count == n - 1) {
//			printf("%d", Pop(queueA));
//			count++;
//		}
//		else {
//			printf("%d ", Pop(queueA));
//			count++;
//		}
//	}
//	while (queueB->font != queueB->rear) {
//		if (count == n - 1) {
//			printf("%d", Pop(queueB));
//			count++;
//		}
//		else {
//			printf("%d ", Pop(queueB));
//			count++;
//		}
//	}
//
//	return 0;
//}


//
//#include <stdio.h>
//#include <stdlib.h>
//
////FCEADHG##B###M#####
//typedef struct BNode {
//	char data;
//	struct BNode* lchild;
//	struct BNode* rchild;
//}BNode,*BTree;
//
//struct qNode {//队列的节点，存放树节点的地址
//	struct BNode* data;
//	struct qNode* next;
//};
//
//struct Queue {//队列
//	struct qNode* font;
//	struct qNode* rear;
//};
//
//struct Queue* InitiQue() {
//	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
//	queue->font = NULL;
//	queue->rear = NULL;
//	return queue;
//}
//
//void addQueue(struct Queue* queue, BTree tree) {
//	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//创建一个临时的链队节点
//	qnode->data = tree;//数据赋值
//	qnode->next = NULL;//零节点的下一个位置为空
//	if (queue->rear == NULL) {//如果链队为空
//		queue->font = qnode;
//		queue->rear = qnode;
//	}
//	else {
//		queue->rear->next = qnode;//将临时节点赋值给链队尾指针的下一个位置
//		queue->rear = qnode;//尾指针更换位置
//	}
//}
//
//BTree popQueue(struct Queue* queue) {
//	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//创建一个临时的链队节点
//	struct BNode* bnode = (struct BNode*)malloc(sizeof(struct BNode));
//	if (queue->font == NULL) {//链队为空
//		return 0;
//	}
//	if (queue->font == queue->rear) {//链队里面只有一个元素
//		bnode = queue->font->data;
//		queue->font = NULL;
//		queue->rear = NULL;
//	}
//	else {
//		qnode = queue->font;//临时队列节点接收首元节点
//		bnode = qnode->data;
//		queue->font = qnode->next;//第一个节点位置指向下一个
//	}
//	return bnode;
//}
//
//void InitiTree(BTree Bt) {
//	Bt->lchild = NULL;
//	Bt->rchild = NULL;
//}
//
////先序遍历
//void preOrder(BTree tree) {
//	if (tree) {
//		printf("%c", tree->data);
//		preOrder(tree->lchild);
//		preOrder(tree->rchild);
//	}
//}
//
////中序遍历
//void midOrder(BTree tree) {
//	if (tree) {
//		midOrder(tree->lchild);
//		printf("%c", tree->data);
//		midOrder(tree->rchild);
//	}
//}
//
////后序遍历
//void backOrder(BTree tree) {
//	if (tree) {
//		backOrder(tree->lchild);
//		backOrder(tree->rchild);
//		printf("%c", tree->data);
//	}
//}
//
//int getLeavesNum(BTree tree) {
//	if (tree == NULL) {
//		return 0;
//	}
//	else {
//		if (tree->lchild == tree->rchild && tree->lchild == NULL) {
//			return 1;
//		}
//		return getLeavesNum(tree->lchild) + getLeavesNum(tree->rchild);
//	}
//}
//
//int main() {
//
//	char c;
//	BTree tree = (struct BNode*)malloc(sizeof(struct BNode));
//	InitiTree(tree);
//	struct Queue* queue = InitiQue();
//	scanf("%c", &c);//输入根节点数据
//	if (c == '#') {
//		printf("0");
//		return 0;
//	}
//	else {
//		tree->data = c;
//		addQueue(queue, tree);
//	}
//	scanf("%c", &c);
//	while (c != '\n') {
//		struct BNode* bnode = (struct BNode*)malloc(sizeof(struct BNode));
//		bnode = popQueue(queue);//将队列中的第一个出队
//		if (c == '#') {//左孩子为空
//			bnode->lchild = NULL;
//		}
//		else {
//			bnode->lchild = (struct BNode*)malloc(sizeof(struct BNode));
//			bnode->lchild->data = c;
//			addQueue(queue, bnode->lchild);
//		}
//		scanf("%c", &c);
//		if (c == '#') {//左孩子为空
//			bnode->rchild = NULL;
//		}
//		else {
//			bnode->rchild = (struct BNode*)malloc(sizeof(struct BNode));
//			bnode->rchild->data = c;
//			addQueue(queue, bnode->rchild);
//		}
//		scanf("%c", &c);
//	}
//
//	preOrder(tree); printf("\n");
//	midOrder(tree); printf("\n");
//	backOrder(tree); printf("\n");
//	int count = getLeavesNum(tree);
//	printf("%d", count);
//
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>

//FCEADHG##B###M#####
typedef struct BNode {
	char data;
	struct BNode* lchild;
	struct BNode* rchild;
}BNode, * BTree;

struct qNode {//队列的节点，存放树节点的地址
	struct BNode* data;
	struct qNode* next;
};

struct Queue {//队列
	struct qNode* font;
	struct qNode* rear;
};

struct Queue* InitiQue() {
	struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
	queue->font = NULL;
	queue->rear = NULL;
	return queue;
}

void pushQueue(struct Queue* queue, BTree tree) {
	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//创建一个临时的链队节点
	qnode->data = tree;//数据赋值
	qnode->next = NULL;//零节点的下一个位置为空
	if (queue->rear == NULL) {//如果链队为空
		queue->font = qnode;
		queue->rear = qnode;
	}
	else {
		queue->rear->next = qnode;//将临时节点赋值给链队尾指针的下一个位置
		queue->rear = qnode;//尾指针更换位置
	}
}

BTree popQueue(struct Queue* queue) {
	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//创建一个临时的链队节点
	struct BNode* bnode = (struct BNode*)malloc(sizeof(struct BNode));
	if (queue->font == NULL) {//链队为空
		return 0;
	}
	if (queue->font == queue->rear) {//链队里面只有一个元素
		bnode = queue->font->data;
		queue->font = NULL;
		queue->rear = NULL;
	}
	else {
		qnode = queue->font;//临时队列节点接收首元节点
		bnode = qnode->data;
		queue->font = qnode->next;//第一个节点位置指向下一个
	}
	return bnode;
}

void InitiTree(BTree Bt) {
	Bt->lchild = NULL;
	Bt->rchild = NULL;
}

//先序遍历
void preOrder(BTree tree) {
	if (tree) {
		printf("%c", tree->data);
		preOrder(tree->lchild);
		preOrder(tree->rchild);
	}
}

//中序遍历
void midOrder(BTree tree) {
	if (tree) {
		midOrder(tree->lchild);
		printf("%c", tree->data);
		midOrder(tree->rchild);
	}
}

//后序遍历
void backOrder(BTree tree) {
	if (tree) {
		backOrder(tree->lchild);
		backOrder(tree->rchild);
		printf("%c", tree->data);
	}
}

int getLeavesNum(BTree tree) {
	if (tree == NULL) {
		return 0;
	}
	else {
		if (tree->lchild == tree->rchild && tree->lchild == NULL) {
			return 1;
		}
		return getLeavesNum(tree->lchild) + getLeavesNum(tree->rchild);
	}
}

int main() {

	char c;
	BTree tree = (struct BNode*)malloc(sizeof(struct BNode));
	InitiTree(tree);
	struct Queue* queue = InitiQue();
	scanf("%c", &c);//输入根节点数据
	if (c == '#') {
		printf("0");
		return 0;
	}
	else {
		tree->data = c;
		pushQueue(queue, tree);
	}
	//scanf("%c", &c);
	while (queue->font != NULL) {
		struct BNode* bnode = (struct BNode*)malloc(sizeof(struct BNode));
		bnode = popQueue(queue);//将队列中的第一个出队
		scanf("%c", &c);
		if (c == '#') {//左孩子为空
			bnode->lchild = NULL;
		}
		else {
			bnode->lchild = (struct BNode*)malloc(sizeof(struct BNode));
			bnode->lchild->data = c;
			pushQueue(queue, bnode->lchild);
		}
		//if(scanf("%c", &c) == EOF) break;
		scanf("%c", &c);
		if (c == '#') {//左孩子为空
			bnode->rchild = NULL;
		}
		else {
			bnode->rchild = (struct BNode*)malloc(sizeof(struct BNode));
			bnode->rchild->data = c;
			pushQueue(queue, bnode->rchild);
		}
		//scanf("%c", &c);
	}

	preOrder(tree); printf("\n");
	midOrder(tree); printf("\n");
	backOrder(tree); printf("\n");
	int count = getLeavesNum(tree);
	printf("%d", count);

	return 0;
}