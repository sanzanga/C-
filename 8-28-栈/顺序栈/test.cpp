#include <iostream>
using namespace std;

#define ElemType int
#define MAXSIDE 100

typedef struct {
	ElemType* top;
	ElemType* base;
	int stacksize;
}SqStack;

//顺序栈的初始化
void InitStack(SqStack& S) {
	S.base = new ElemType[MAXSIDE];
	S.top = S.base;
	S.stacksize = MAXSIDE;
}

//判断顺序栈是否为空
bool StackEmpty(SqStack S) {
	if (S.top == S.base) {
		return true;
	}
	return false;
}

//求顺序栈的长度
int StackLength(SqStack S) {
	return S.top - S.base;
}

//清空顺序栈
void ClearStack(SqStack& S) {
	if (S.base) {
		S.top = S.base;
	}
}

//销毁顺序炸
void DestroyStack(SqStack& S) {
	if (S.base) {
		delete S.base;
		S.stacksize = 0;
		S.top = S.base = NULL;
	}
}

//取出顺序栈的栈顶元素
ElemType GetTop(SqStack S) {
	if (S.base != S.top) {
		return *(--S.top);
	}
}

//顺序栈入栈
void Push(SqStack& S, ElemType e) {
	if (S.top - S.base == MAXSIDE) {
		cout << "顺序栈已满" << endl;
		return;
	}
	*S.top = e;
	S.top++;
}

//顺序栈出栈
void Pop(SqStack& S, ElemType& e) {
	if (S.top == S.base) {
		cout << "顺序栈为空" << endl;
		return;
	}
	S.top--;
	e = *S.top;
}

//顺序栈的输入
void StackInput(SqStack& S, int n) {
	if (MAXSIDE-(S.top-S.base)<n) {
		cout << "顺序栈位置不够" << endl;
		return;
	}
	ElemType e;
	for (int i = 0; i < n; i++) {
		cin >> e;
		Push(S, e);
	}
}

//遍历顺序栈
void StackOutput(SqStack S) {
	if (S.top == S.base) {
		cout << "顺序栈为空" << endl;
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

	//取出栈顶的元素
	int top = GetTop(Sa);
	cout << "栈顶元素为：" << top << endl;

	//判断顺序栈是否为空
	bool ret = StackEmpty(Sa);
	if (ret) {
		cout << "顺序栈为空" << endl;
	}
	else {
		cout << "顺序栈不为空" << endl;
	}

	//获取顺序栈的长度
	int len = StackLength(Sa);
	cout << "顺序栈的长度为：" << len << endl;

	cout << "-----------------------------------" << endl;

	ClearStack(Sa);
	//判断顺序栈是否为空
	ret = StackEmpty(Sa);
	if (ret) {
		cout << "顺序栈为空" << endl;
	}
	else {
		cout << "顺序栈不为空" << endl;
	}

	//获取顺序栈的长度
	len = StackLength(Sa);
	cout << "顺序栈的长度为：" << len << endl;

	DestroyStack(Sa);

	return 0;
}