#include <iostream>
using namespace std;

#define ElemType int

typedef struct QNode {
	ElemType data;
	QNode* next;
}QNode,*QueuePtr;

typedef struct {
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

//链队的初始化
void InitQueue(LinkQueue& Q) {
	Q.front = new QNode;
	Q.rear = Q.front;
	Q.front->next = NULL;
}

//判断链队是否为空
bool QueueEmpty(LinkQueue Q) {
	if (Q.front == Q.rear) {
		return true;
	}
	else {
		return false;
	}
}

//获取链队的长度
int QueueLength(LinkQueue Q) {
	int j = 0;
	QNode* p = new QNode;
	p = Q.front->next;
	while (p) {
		j++;
		p = p->next;
	}
	return j;
}

//链队的入队
void EnQueue(LinkQueue& Q, ElemType e) {
	QNode* p = new QNode;
	p->data = e;
	Q.rear->next = p;
	p->next = NULL;
	Q.rear = p;
}

//链队的出队
void DelQueue(LinkQueue& Q, ElemType& e) {
	if (Q.rear == Q.front) {
		cout << "链队为空" << endl;
		return;
	}
	QNode* p = new QNode;
	p = Q.front->next;
	e = p->data;
	Q.front->next = p->next;
	if (Q.rear == p) {
		Q.front == Q.rear;
	}
	delete p;
}

//取链表的队头元素
ElemType GetHead(LinkQueue Q) {
	if (Q.front != Q.rear) {
		return Q.front->next->data;
	}
}

//链队的输入
void QueueInput(LinkQueue& Q, int n) {
	ElemType e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		EnQueue(Q, e);
	}
}

//链队的输出
void QueueOutput(LinkQueue Q) {
	if (Q.rear == Q.front) {
		cout << "链队为空" << endl;
		return;
	}
	int len = QueueLength(Q);
	QNode* p = new QNode;
	p = Q.front->next;
	for (int i = 0; i < len; i++) {
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}

//清空链队
void ClearQueue(LinkQueue& Q) {
	QNode* p = new QNode;
	QNode* q;
	p = Q.front->next;
	while (p) {
		q = new QNode;
		q = p;
		p = q->next;
		delete q;
	}
	Q.rear = Q.front;
	Q.front->next = NULL;
}

//销毁链队
void DestroyQueue(LinkQueue& Q) {
	QNode* p = new QNode;
	while (Q.front) {
		p = Q.front->next;
		delete(Q.front);
		Q.front = p;
	}
}

int main() {

	LinkQueue Q;
	InitQueue(Q);

	bool ret = QueueEmpty(Q);
	if (ret) {
		cout << "链队为空" << endl;
	}
	else {
		cout << "链队不为空" << endl;
	}
	int len = QueueLength(Q);
	cout << "链队的长度为：" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "链队为空" << endl;
	}
	else {
		cout << "链队不为空" << endl;
	}
	len = QueueLength(Q);
	cout << "链队的长度为：" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	ElemType e;
	DelQueue(Q, e);
	cout << "出队的值：" << e << endl;
	DelQueue(Q, e);
	cout << "出队的值：" << e << endl;
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "链队为空" << endl;
	}
	else {
		cout << "链队不为空" << endl;
	}
	len = QueueLength(Q);
	cout << "链队的长度为：" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	QueueInput(Q, 5);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "链队为空" << endl;
	}
	else {
		cout << "链队不为空" << endl;
	}
	len = QueueLength(Q);
	cout << "链队的长度为：" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	e = GetHead(Q);
	cout << "队头元素为：" << e << endl;

	cout << "--------------------------------" << endl;

	ClearQueue(Q);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "链队为空" << endl;
	}
	else {
		cout << "链队不为空" << endl;
	}
	len = QueueLength(Q);
	cout << "链队的长度为：" << len << endl;
	QueueOutput(Q);

	return 0;
}