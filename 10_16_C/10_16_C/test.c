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
//struct qNode {//���еĽڵ㣬������ڵ�ĵ�ַ
//	struct BNode* data;
//	struct qNode* next;
//};
//
//struct Queue {//����
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
//	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//����һ����ʱ�����ӽڵ�
//	qnode->data = tree;//���ݸ�ֵ
//	qnode->next = NULL;//��ڵ����һ��λ��Ϊ��
//	if (queue->rear == NULL) {//�������Ϊ��
//		queue->font = qnode;
//		queue->rear = qnode;
//	}
//	else {
//		queue->rear->next = qnode;//����ʱ�ڵ㸳ֵ������βָ�����һ��λ��
//		queue->rear = qnode;//βָ�����λ��
//	}
//}
//
//BTree popQueue(struct Queue* queue) {
//	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//����һ����ʱ�����ӽڵ�
//	struct BNode* bnode = (struct BNode*)malloc(sizeof(struct BNode));
//	if (queue->font == NULL) {//����Ϊ��
//		return 0;
//	}
//	if (queue->font == queue->rear) {//��������ֻ��һ��Ԫ��
//		bnode = queue->font->data;
//		queue->font = NULL;
//		queue->rear = NULL;
//	}
//	else {
//		qnode = queue->font;//��ʱ���нڵ������Ԫ�ڵ�
//		bnode = qnode->data;
//		queue->font = qnode->next;//��һ���ڵ�λ��ָ����һ��
//	}
//	return bnode;
//}
//
//void InitiTree(BTree Bt) {
//	Bt->lchild = NULL;
//	Bt->rchild = NULL;
//}
//
////�������
//void preOrder(BTree tree) {
//	if (tree) {
//		printf("%c", tree->data);
//		preOrder(tree->lchild);
//		preOrder(tree->rchild);
//	}
//}
//
////�������
//void midOrder(BTree tree) {
//	if (tree) {
//		midOrder(tree->lchild);
//		printf("%c", tree->data);
//		midOrder(tree->rchild);
//	}
//}
//
////�������
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
//	scanf("%c", &c);//������ڵ�����
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
//		bnode = popQueue(queue);//�������еĵ�һ������
//		if (c == '#') {//����Ϊ��
//			bnode->lchild = NULL;
//		}
//		else {
//			bnode->lchild = (struct BNode*)malloc(sizeof(struct BNode));
//			bnode->lchild->data = c;
//			addQueue(queue, bnode->lchild);
//		}
//		scanf("%c", &c);
//		if (c == '#') {//����Ϊ��
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

struct qNode {//���еĽڵ㣬������ڵ�ĵ�ַ
	struct BNode* data;
	struct qNode* next;
};

struct Queue {//����
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
	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//����һ����ʱ�����ӽڵ�
	qnode->data = tree;//���ݸ�ֵ
	qnode->next = NULL;//��ڵ����һ��λ��Ϊ��
	if (queue->rear == NULL) {//�������Ϊ��
		queue->font = qnode;
		queue->rear = qnode;
	}
	else {
		queue->rear->next = qnode;//����ʱ�ڵ㸳ֵ������βָ�����һ��λ��
		queue->rear = qnode;//βָ�����λ��
	}
}

BTree popQueue(struct Queue* queue) {
	struct qNode* qnode = (struct qNode*)malloc(sizeof(struct qNode));//����һ����ʱ�����ӽڵ�
	struct BNode* bnode = (struct BNode*)malloc(sizeof(struct BNode));
	if (queue->font == NULL) {//����Ϊ��
		return 0;
	}
	if (queue->font == queue->rear) {//��������ֻ��һ��Ԫ��
		bnode = queue->font->data;
		queue->font = NULL;
		queue->rear = NULL;
	}
	else {
		qnode = queue->font;//��ʱ���нڵ������Ԫ�ڵ�
		bnode = qnode->data;
		queue->font = qnode->next;//��һ���ڵ�λ��ָ����һ��
	}
	return bnode;
}

void InitiTree(BTree Bt) {
	Bt->lchild = NULL;
	Bt->rchild = NULL;
}

//�������
void preOrder(BTree tree) {
	if (tree) {
		printf("%c", tree->data);
		preOrder(tree->lchild);
		preOrder(tree->rchild);
	}
}

//�������
void midOrder(BTree tree) {
	if (tree) {
		midOrder(tree->lchild);
		printf("%c", tree->data);
		midOrder(tree->rchild);
	}
}

//�������
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
	scanf("%c", &c);//������ڵ�����
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
		bnode = popQueue(queue);//�������еĵ�һ������
		scanf("%c", &c);
		if (c == '#') {//����Ϊ��
			bnode->lchild = NULL;
		}
		else {
			bnode->lchild = (struct BNode*)malloc(sizeof(struct BNode));
			bnode->lchild->data = c;
			pushQueue(queue, bnode->lchild);
		}
		//if(scanf("%c", &c) == EOF) break;
		scanf("%c", &c);
		if (c == '#') {//����Ϊ��
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