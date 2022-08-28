#include <iostream>
using namespace std;

#define ElemType int

typedef struct StackNode {
	ElemType data;
	StackNode* next;
}StackNode,*LinkStack;

//初始化链栈
void InitStack(LinkStack& S) {
	S = NULL;
}

//判断链栈是否为空
bool StackEmpty(LinkStack& S) {
	if (S == NULL) {
		return true;
	}
	return false;
}

//求链栈的长度
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

//链栈的入栈
void Push(LinkStack& S, ElemType e) {
	StackNode* p = new StackNode;
	p->data = e;
	p->next = S;
	S = p;//修改栈顶指针为p
}

//链栈的出栈
void Pop(LinkStack& S, ElemType& e) {
	if (S == NULL) {
		cout << "栈中无元素" << endl;
		return;
	}
	StackNode* p = new StackNode;
	e = S->data;
	p = S;
	S = S->next;
	delete p;
}

//获取链栈栈顶的元素
ElemType GetTop(LinkStack S) {
	if (S != NULL) {
		return S->data;
	}
}

//遍历链栈
void StackOutput(LinkStack S) {
	if (S == NULL) {
		cout << "栈为空" << endl;
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

//链栈的输入
void StackInput(LinkStack &S,int n) {
	ElemType e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		Push(S, e);
	}
}

//清空链栈
void ClearStack(LinkStack& S) {
	StackNode* p;
	while (S) {
		p = new StackNode;
		p = S;
		S = S->next;
		delete p;
	}
}

//销毁链栈
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
		cout << "链栈为空" << endl;
	}
	else {
		cout << "链栈不为空" << endl;
	}

	ElemType e;
	Push(Sa, 1);
	Push(Sa, 2);
	Push(Sa, 3);
	Push(Sa, 4);

	ret = StackEmpty(Sa);
	if (ret) {
		cout << "链栈为空" << endl;
	}
	else {
		cout << "链栈不为空" << endl;
	}

	//求链栈的长度
	int len = StackLength(Sa);
	cout << "链栈的长度为：" << len << endl;
	StackOutput(Sa);

	Pop(Sa,e);
	len = StackLength(Sa);
	cout << "链栈的长度为：" << len << endl;
	cout << e << endl;

	cout << "-------------------------" << endl;

	StackInput(Sa, 4);
	StackOutput(Sa);
	len = StackLength(Sa);
	cout << "链栈的长度为：" << len << endl;

	ClearStack(Sa);
	len = StackLength(Sa);
	cout << "链栈的长度为：" << len << endl;
	ret = StackEmpty(Sa);
	if (ret) {
		cout << "链栈为空" << endl;
	}
	else {
		cout << "链栈不为空" << endl;
	}

	DestroyStack(Sa);

	return 0;
}