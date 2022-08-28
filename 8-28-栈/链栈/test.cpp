#include <iostream>
using namespace std;

#define ElemType int

typedef struct StackNode {
	ElemType data;
	StackNode* next;
}StackNode,*LinkStack;

//��ʼ����ջ
void InitStack(LinkStack& S) {
	S = NULL;
}

//�ж���ջ�Ƿ�Ϊ��
bool StackEmpty(LinkStack& S) {
	if (S == NULL) {
		return true;
	}
	return false;
}

//����ջ�ĳ���
int StackLength(LinkStack S) {
	StackNode* p = new StackNode;
	int j = 0;
	p = S;
	while (p) {
		j++;
		p = S->next;
		S = p;
	}
	return j;
}

//��ջ����ջ
void Push(LinkStack& S, ElemType e) {
	StackNode* p = new StackNode;
	p->data = e;
	p->next = S;
	S = p;//�޸�ջ��ָ��Ϊp
}

//��ջ�ĳ�ջ
void Pop(LinkStack& S, ElemType& e) {
	if (S == NULL) {
		cout << "ջ����Ԫ��" << endl;
		return;
	}
	StackNode* p = new StackNode;
	e = S->data;
	p = S;
	S = S->next;
	delete p;
}

//��ȡ��ջջ����Ԫ��
ElemType GetTop(LinkStack S) {
	if (S != NULL) {
		return S->data;
	}
}

//������ջ
void StackOutput(LinkStack S) {
	if (S == NULL) {
		cout << "ջΪ��" << endl;
		return;
	}
	int len = StackLength(S);
	ElemType ele;
	/*StackNode* p = new StackNode;
	p = S;*/
	for (int i = 0; i < len; i++) {
		ele = GetTop(S);
		S = S->next;
		cout << ele << " ";
	}
	cout << endl;
}

//��ջ������
void StackInput(LinkStack &S,int n) {
	ElemType e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		Push(S, e);
	}
}

//�����ջ
void ClearStack(LinkStack& S) {
	StackNode* p;
	while (S) {
		p = new StackNode;
		p = S;
		S = S->next;
		delete p;
	}
}

//������ջ
void DestroyStack(LinkStack& S) {
	StackNode* p;
	while (S) {
		p = new StackNode;
		p = S;
		S = S->next;
		delete p;
	}
	delete S;
}

int main() {

	LinkStack Sa;
	InitStack(Sa);

	bool ret = StackEmpty(Sa);
	if (ret) {
		cout << "��ջΪ��" << endl;
	}
	else {
		cout << "��ջ��Ϊ��" << endl;
	}

	ElemType e;
	Push(Sa, 1);
	Push(Sa, 2);
	Push(Sa, 3);
	Push(Sa, 4);

	ret = StackEmpty(Sa);
	if (ret) {
		cout << "��ջΪ��" << endl;
	}
	else {
		cout << "��ջ��Ϊ��" << endl;
	}

	//����ջ�ĳ���
	int len = StackLength(Sa);
	cout << "��ջ�ĳ���Ϊ��" << len << endl;
	StackOutput(Sa);

	Pop(Sa,e);
	len = StackLength(Sa);
	cout << "��ջ�ĳ���Ϊ��" << len << endl;
	cout << e << endl;

	cout << "-------------------------" << endl;

	StackInput(Sa, 4);
	StackOutput(Sa);
	len = StackLength(Sa);
	cout << "��ջ�ĳ���Ϊ��" << len << endl;

	ClearStack(Sa);
	len = StackLength(Sa);
	cout << "��ջ�ĳ���Ϊ��" << len << endl;
	ret = StackEmpty(Sa);
	if (ret) {
		cout << "��ջΪ��" << endl;
	}
	else {
		cout << "��ջ��Ϊ��" << endl;
	}

	DestroyStack(Sa);

	return 0;
}