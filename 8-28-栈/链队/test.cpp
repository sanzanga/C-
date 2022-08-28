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

//���ӵĳ�ʼ��
void InitQueue(LinkQueue& Q) {
	Q.front = new QNode;
	Q.rear = Q.front;
	Q.front->next = NULL;
}

//�ж������Ƿ�Ϊ��
bool QueueEmpty(LinkQueue Q) {
	if (Q.front == Q.rear) {
		return true;
	}
	else {
		return false;
	}
}

//��ȡ���ӵĳ���
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

//���ӵ����
void EnQueue(LinkQueue& Q, ElemType e) {
	QNode* p = new QNode;
	p->data = e;
	Q.rear->next = p;
	p->next = NULL;
	Q.rear = p;
}

//���ӵĳ���
void DelQueue(LinkQueue& Q, ElemType& e) {
	if (Q.rear == Q.front) {
		cout << "����Ϊ��" << endl;
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

//ȡ����Ķ�ͷԪ��
ElemType GetHead(LinkQueue Q) {
	if (Q.front != Q.rear) {
		return Q.front->next->data;
	}
}

//���ӵ�����
void QueueInput(LinkQueue& Q, int n) {
	ElemType e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		EnQueue(Q, e);
	}
}

//���ӵ����
void QueueOutput(LinkQueue Q) {
	if (Q.rear == Q.front) {
		cout << "����Ϊ��" << endl;
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

//�������
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

//��������
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
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "���Ӳ�Ϊ��" << endl;
	}
	int len = QueueLength(Q);
	cout << "���ӵĳ���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "���Ӳ�Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���ӵĳ���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	ElemType e;
	DelQueue(Q, e);
	cout << "���ӵ�ֵ��" << e << endl;
	DelQueue(Q, e);
	cout << "���ӵ�ֵ��" << e << endl;
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "���Ӳ�Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���ӵĳ���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	QueueInput(Q, 5);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "���Ӳ�Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���ӵĳ���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "--------------------------------" << endl;

	e = GetHead(Q);
	cout << "��ͷԪ��Ϊ��" << e << endl;

	cout << "--------------------------------" << endl;

	ClearQueue(Q);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "����Ϊ��" << endl;
	}
	else {
		cout << "���Ӳ�Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���ӵĳ���Ϊ��" << len << endl;
	QueueOutput(Q);

	return 0;
}