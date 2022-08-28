#include <iostream>
using namespace std;

#define ElemType int
#define MAXSIDE 100

typedef struct {
	ElemType* top;
	ElemType* base;
	int stacksize;
}SqStack;

//˳��ջ�ĳ�ʼ��
void InitStack(SqStack& S) {
	S.base = new ElemType[MAXSIDE];
	S.top = S.base;
	S.stacksize = MAXSIDE;
}

//�ж�˳��ջ�Ƿ�Ϊ��
bool StackEmpty(SqStack S) {
	if (S.top == S.base) {
		return true;
	}
	return false;
}

//��˳��ջ�ĳ���
int StackLength(SqStack S) {
	return S.top - S.base;
}

//���˳��ջ
void ClearStack(SqStack& S) {
	if (S.base) {
		S.top = S.base;
	}
}

//����˳��ը
void DestroyStack(SqStack& S) {
	if (S.base) {
		delete S.base;
		S.stacksize = 0;
		S.top = S.base = NULL;
	}
}

//ȡ��˳��ջ��ջ��Ԫ��
ElemType GetTop(SqStack S) {
	if (S.base != S.top) {
		return *(--S.top);
	}
}

//˳��ջ��ջ
void Push(SqStack& S, ElemType e) {
	if (S.top - S.base == MAXSIDE) {
		cout << "˳��ջ����" << endl;
		return;
	}
	*S.top = e;
	S.top++;
}

//˳��ջ��ջ
void Pop(SqStack& S, ElemType& e) {
	if (S.top == S.base) {
		cout << "˳��ջΪ��" << endl;
		return;
	}
	S.top--;
	e = *S.top;
}

//˳��ջ������
void StackInput(SqStack& S, int n) {
	if (MAXSIDE-(S.top-S.base)<n) {
		cout << "˳��ջλ�ò���" << endl;
		return;
	}
	ElemType e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		Push(S, e);
	}
}

//����˳��ջ
void StackOutput(SqStack S) {
	if (S.top == S.base) {
		cout << "˳��ջΪ��" << endl;
		return;
	}
	ElemType e;
	int len = StackLength(S);
	ElemType* top;
	for (int i = 0; i < len ; i++) {
		e = GetTop(S);
		S.top--;
		cout << e << " ";
	}
	cout << endl;
}

int main() {

	SqStack Sa;
	InitStack(Sa);

	StackInput(Sa, 5);
	StackOutput(Sa);

	Push(Sa, 6);
	StackOutput(Sa);

	ElemType e;
	Pop(Sa,e);
	cout << e << endl;
	StackOutput(Sa);

	//ȡ��ջ����Ԫ��
	int top = GetTop(Sa);
	cout << "ջ��Ԫ��Ϊ��" << top << endl;

	//�ж�˳��ջ�Ƿ�Ϊ��
	bool ret = StackEmpty(Sa);
	if (ret) {
		cout << "˳��ջΪ��" << endl;
	}
	else {
		cout << "˳��ջ��Ϊ��" << endl;
	}

	//��ȡ˳��ջ�ĳ���
	int len = StackLength(Sa);
	cout << "˳��ջ�ĳ���Ϊ��" << len << endl;

	cout << "-----------------------------------" << endl;

	ClearStack(Sa);
	//�ж�˳��ջ�Ƿ�Ϊ��
	ret = StackEmpty(Sa);
	if (ret) {
		cout << "˳��ջΪ��" << endl;
	}
	else {
		cout << "˳��ջ��Ϊ��" << endl;
	}

	//��ȡ˳��ջ�ĳ���
	len = StackLength(Sa);
	cout << "˳��ջ�ĳ���Ϊ��" << len << endl;

	DestroyStack(Sa);

	return 0;
}