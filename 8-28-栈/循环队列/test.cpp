#include <iostream>
using namespace std;

#define ElemType int 
#define MAXSIDE 100

typedef struct {
	ElemType* base;
	int front;
	int rear;
}SqQueue;

//循环队列的初始化
void InitSqQueue(SqQueue& Q) {
	Q.base = new ElemType[MAXSIDE];
	Q.front = 0;
	Q.rear = 0;
}

//判断队列是否为空
bool QueueEmpty(SqQueue Q) {
	return Q.rear - Q.front;
}

//求循环队列的长度
int QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXSIDE) % MAXSIDE;
}

//循环队列的入队
void EnQueue(SqQueue& Q, ElemType e) {
	if ((Q.rear + 1) % MAXSIDE == Q.front) {
		cout << "队列已满" << endl;
		return;
	}
	Q.base[Q.rear] = e;
	Q.rear = (Q.rear + 1) % MAXSIDE;
}

//循环队列出队
void DeQueue(SqQueue& Q, ElemType& e) {
	if (Q.rear == Q.front) {
		cout << "列队为空" << endl;
		return;
	}
	e = Q.base[Q.front];
	Q.front = (Q.front + 1) % MAXSIDE;
}

//取队头的元素
ElemType GetHead(SqQueue Q) {
	if (Q.front != Q.rear) {
		return Q.base[Q.front];
	}
}

//遍历出循环队列的元素
void QueueOutput(SqQueue Q) {
	if (Q.front == Q.rear) {
		cout << "队列为空" << endl;
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

//循环队列输入
void QueueInput(SqQueue& Q, int n) {
	int flag = Q.rear;
	ElemType e;
	for (int i = 0; i < n; i++) {
		if ((flag + 1) % MAXSIDE == Q.front) {
			cout << "队列空间不足" << endl;
			return;
		}
		flag++;
	}
	for (int i = 0; i < n; i++) {
		cin >> e;
		EnQueue(Q, e);
	}
}

//清空循环队列
void ClearQueue(SqQueue& Q) {
	if (Q.front == Q.rear) {
		cout << "列表为空" << endl;
		return;
	}
	Q.rear = Q.front;
}

//销毁循环队列
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
	cout << "队列长度为：" << len << endl;
	bool ret = QueueEmpty(Q);
	if (ret) {
		cout << "队列不为空" << endl;
	}
	else {
		cout << "队列为空" << endl;
	}

	cout << "----------------------" << endl;

	EnQueue(Q, 1);
	EnQueue(Q, 2);
	EnQueue(Q, 3);
	EnQueue(Q, 4);
	EnQueue(Q, 5);

	ret = QueueEmpty(Q);
	if (ret) {
		cout << "队列不为空" << endl;
	}
	else {
		cout << "队列为空" << endl;
	}
	len = QueueLength(Q);
	cout << "队列长度为：" << len << endl;
	QueueOutput(Q);

	cout << "----------------------" << endl;

	ElemType e;
	DeQueue(Q, e);
	cout << "出队元素为：" << e << endl;
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "队列不为空" << endl;
	}
	else {
		cout << "队列为空" << endl;
	}
	len = QueueLength(Q);
	cout << "队列长度为：" << len << endl;
	QueueOutput(Q);

	cout << "----------------------" << endl;
	QueueInput(Q, 3);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "队列不为空" << endl;
	}
	else {
		cout << "队列为空" << endl;
	}
	len = QueueLength(Q);
	cout << "队列长度为：" << len << endl;
	QueueOutput(Q);

	cout << "----------------------" << endl;
	
	ClearQueue(Q);
	ret = QueueEmpty(Q);
	if (ret) {
		cout << "队列不为空" << endl;
	}
	else {
		cout << "队列为空" << endl;
	}
	len = QueueLength(Q);
	cout << "队列长度为：" << len << endl;
	QueueOutput(Q);

	DestroyQueue(Q);

	return 0;
}