#include <iostream>
using namespace std;

#define ElemType int

typedef struct LNode {
	ElemType data;
	LNode* next;
}LNode,*LinkList;

//初始化单链表
void InitiList(LinkList& L) {
	//创建一个空表
	L = new LNode;
	L->next = NULL;
}

//销毁单链表
void DestroyList(LinkList& L) {
	LNode* p = new LNode;
	while (p) {
		p = L;
		L = L->next;
		delete p;
	}
}

//清空链表
void ClearList(LinkList& L) {
	LNode* p, * q;
	p = L->next;
	while (p) {
		q = p->next;
		delete p;
		p = q;
	}
	L->next = NULL;
}

//求链表的长度
int ListLength(LinkList L) {
	LNode* p = new LNode;
	int i = 0;
	p = L->next;
	while (p) {
		i++;
		p = p->next;
	}
	return i;
}

//链表的取值
int GetElem(LinkList L, int i, ElemType& e) {
	//在带头结点的单链表中根据序号i获取元素的值，用e返回L中第i个数据元素的值
	LNode* p = new LNode;
	p = L->next;
	int j = 1;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p || j > i) {
		cout << "取值错误" << endl;
		return 0;
	}
	e = p->data;
	return 1;
}

//单链表中按值查找
LNode* LocateElem(LinkList L, ElemType e) {
	//在带头结点的单链表中查找值为e的元素，返回该值节点
	LNode* p = new LNode;
	p = L->next;
	while (p && p->data != e) {
		p = p->next;
	}
	return p;
}

//单链表的插入
void ListInsert(LinkList& L, int i, ElemType e) {
	LNode* p = new LNode;
	p = L;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (!p || (j > i - 1)) {
		cout << "插入失败" << endl;
		return;
	}
	LNode* q = new LNode;
	q->data = e;
	q->next = p->next;
	p->next = q;
}

//单链表的删除
void ListDelete(LinkList& L, int i) {
	LNode* p = new LNode;
	p = L;
	int j = 0;
	while (p && (j < i - 1)) {
		p = p->next;
		j++;
	}
	if (!(p->next) && j > i - 1) {
		cout << "删除失败" << endl;
		return;
	}
	LNode* q = new LNode;
	q = p->next;
	p->next = q->next;
	delete q;
}

//前插法创建单链表
void CreateList_H(LinkList& L, int n) {
	LNode* p;
	L = new LNode;
	L->next = NULL;
	for (int i = 0; i < n; i++) {
		p = new LNode;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}

//后插法创建单链表
void CreateList_R(LinkList& L, int n) {
	LNode* p;
	L = new LNode;
	L->next = NULL;
	LNode* r = new LNode;
	r = L;
	for (int i = 0; i < n; i++) {
		p = new LNode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

//遍历俩表
void ListOutput(LinkList L) {
	LNode* p = new LNode;
	p = L->next;
	if (p) {
		for (int i = 0; i < ListLength(L); i++) {
			cout << p->data << " ";
		}
		cout << endl;
	}
	else {
		cout << "链表为空" << endl;
	}
}

//有序表的合并
LinkList MergeList(LinkList& La, LinkList& Lb) {
	LNode* pa, * pb, * pc;
	pa = La->next;
	pb = Lb->next;
	pc = new LNode;
	LinkList Lc = new LNode;
	Lc = La;
	pc = Lc;
	while (pa && pb) {
		if (pa->data <= pb->data) {
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else {
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	pc->next = pa ? pa : pb;
	return Lc;
}

int main() {

	LinkList La;
	LinkList Lb;
	LinkList Lc;
	InitiList(La);
	InitiList(Lb);
	InitiList(Lc);

	CreateList_H(La, 2);
	CreateList_R(Lb, 3);
	ListOutput(La);
	ListOutput(Lb);

	int length = ListLength(La);
	cout << length << endl;
	length = ListLength(Lb);
	cout << length << endl;

	int num = 0;
	int ret = GetElem(La, 4, num);
	if (ret) {
		cout << num << endl;
	}
	else {
		cout << "不存在" << endl;
	}
	ret = GetElem(La, 2, num);
	if (ret) {
		cout << num << endl;
	}
	else {
		cout << "不存在" << endl;
	}

	LNode* res = LocateElem(La, 5);
	if (res) {
		cout << res->data << endl;
	}
	else {
		cout << "不存在" << endl;
	}
	res = LocateElem(La, 2);
	if (res) {
		cout << res->data << endl;
	}
	else {
		cout << "不存在" << endl;
	}

	ListInsert(La, 1, 3);
	ListOutput(La);
	ListInsert(La, 5, 4);
	ListOutput(La);

	ListDelete(La, 1);
	ListOutput(La);
	ListDelete(La, 0);
	ListOutput(La);

	Lc = MergeList(La, Lb);
	ListOutput(Lc);

	ClearList(La);
	ListOutput(La);

	return 0;
}