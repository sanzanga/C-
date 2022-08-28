#include <iostream>
using namespace std;

#define ElemType int 
#define MAXSIDE 100

typedef struct {
	ElemType* base;
	int front;
	int rear;
}SqQueue;

//ѭ�����еĳ�ʼ��
void InitSqQueue(SqQueue& Q) {
	Q.base = new ElemType[MAXSIDE];
	Q.front = 0;
	Q.rear = 0;
}

//�ж϶����Ƿ�Ϊ��
bool QueueEmpty(SqQueue Q) {
	return Q.rear - Q.front;
}

//��ѭ�����еĳ���
int QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXSIDE) % MAXSIDE;
}

//ѭ�����е����
void EnQueue(SqQueue& Q, ElemType e) {
	if ((Q.rear + 1) % MAXSIDE == Q.front) {
		cout << "��������" << endl;
		return;
	}
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXSIDE;
}

//ѭ�����г���
void DeQueue(SqQueue& Q, ElemType& e) {
	if (Q.rear == Q.front) {
		cout << "�ж�Ϊ��" << endl;
		return;
	}
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXSIDE;
}

//ȡ��ͷ��Ԫ��
ElemType GetHead(SqQueue Q) {
	if (Q.front != Q.rear) {
		return Q.base[Q.front];
	}
}

//������ѭ�����е�Ԫ��
void QueueOutput(SqQueue Q) {
	if (Q.front == Q.rear) {
		cout << "����Ϊ��" << endl;
		return;
	}
	ElemType e;
	int len = QueueLength(Q);
	for (int i = 0; i < len; i++) {
		e = Q.base[Q.front+i];
		cout << e << " ";
	}
	cout << endl;
}

//ѭ����������
void QueueInput(SqQueue& Q, int n) {
	int flag = Q.rear;
	ElemType e;
	for (int i = 0; i < n; i++) {
		if ((flag + 1) % MAXSIDE == Q.front) {
			cout << "���пռ䲻��" << endl;
			return;
		}
		flag++;
	}
	for (int i = 0; i < n; i++) {
		cin >> e;
		EnQueue(Q, e);
	}
}

//���ѭ������
void ClearQueue(SqQueue& Q) {
	if (Q.front == Q.rear) {
		cout << "�б�Ϊ��" << endl;
		return;
	}
	Q.rear = Q.front;
}

//����ѭ������
void DestroyQueue(SqQueue& Q) {
	if(!Q.base) {
		delete Q.base;
		Q.front = Q.rear = 0;
		Q.base = NULL;
	}
}

int main() {

	SqQueue Q;
	InitSqQueue(Q);

	int len = QueueLength(Q);
	cout << "���г���Ϊ��" << len << endl;
	bool ret = QueueEmpty(Q);
	if (ret) {
		cout << "���в�Ϊ��" << endl;
	}
	else {
		cout << "����Ϊ��" << endl;
	}

	cout << "----------------------" << endl;

	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);

	ret = QueueEmpty(Q);
	if (ret) {
		cout << "���в�Ϊ��" << endl;
	}
	else {
		cout << "����Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���г���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "----------------------" << endl;

	ElemType e;
	DeQueue(Q, e);
	cout << "����Ԫ��Ϊ��" << e << endl;
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "���в�Ϊ��" << endl;
	}
	else {
		cout << "����Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���г���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "----------------------" << endl;
	QueueInput(Q, 3);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "���в�Ϊ��" << endl;
	}
	else {
		cout << "����Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���г���Ϊ��" << len << endl;
	QueueOutput(Q);

	cout << "----------------------" << endl;
	
	ClearQueue(Q);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "���в�Ϊ��" << endl;
	}
	else {
		cout << "����Ϊ��" << endl;
	}
	len = QueueLength(Q);
	cout << "���г���Ϊ��" << len << endl;
	QueueOutput(Q);

	DestroyQueue(Q);

	return 0;
}