#include <iostream>
using namespace std;

#define ElemType int

typedef struct LNode {
	ElemType data;
	LNode* next;
}LNode,*LinkList;

//��ʼ��������
void InitiList(LinkList& L) {
	//����һ���յĵ�����
	L = new LNode;//�����½ڵ���Ϊͷ���
	L->next = NULL;//ͷ����ָ������Ϊ��
}

//���ٵ�����
void DestroyList(LinkList &L) {
	LNode* p;//����һ���µĽ��
	while (L) {
		p = L;
		L = L->next;
		delete p;
	}
}

//�������
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

//������ĳ���
int ListLength(LinkList L) {
	LNode* p;
	p = new LNode;
	p = L->next;
	int i = 0;
	while (p) {
		i++;
		p = p->next;
	}
	return i;
}

//�����ȡֵ
int GetElem(LinkList L, int i, ElemType& e) {
	//�ڴ�ͷ���ĵ������и������i��ȡԪ�ص�ֵ����e����L�е�i������Ԫ�ص�ֵ
	LNode* p;
	p = L->next;
	int j = 1;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p || j > i) {
		return 0;
	}
	e = p->data;
	return 1;
}

//�������а�ֵ����
LNode* LocateElem(LinkList L, ElemType e) {
	//�ڴ�ͷ���ĵ������в���ֵΪe��Ԫ�أ����ظ�ֵ�ڵ�
	LNode* p;
	p = L->next;
	while (p && p->data != e) {
		p = p->next;
	}
	return p;
}

//������Ĳ���
void ListInsert(LinkList& L, int i, ElemType e) {
	LNode* p;
	p = L;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (!p || j > i - 1) {
		cout << "����ʧ��" << endl;
		return;
	}
	LNode* s;
	InitiList(s);
	s->data = e;
	s->next = p->next;
	p->next = s;
}

//�������ɾ��
void ListDelete(LinkList& L, int i) {
	LNode* p;
	p = L;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (!(p->next) || (j > i - 1)) {
		cout << "ɾ��ʧ��" << endl;
		return;
	}
	LNode* q;
	q = p->next;
	p->next = q->next;
	delete q;
}

//ǰ�巨����������
void CreateList_H(LinkList& L, int n) {
	L = new LNode;
	L->next = NULL;
	LNode* p;
	for (int i = 0; i < n; i++) {
		p = new LNode;
		cin >> p->data;
		p->next = L->next;
		L->next = p;
	}
}

//��巨����������
void CreateList_R(LinkList& L, int n) {
	L = new LNode;
	L->next = NULL;
	LNode* r;
	r = new LNode;
	r = L;
	LNode* p;
	for (int i = 0; i < n; ++i) {
		p = new LNode;
		cin >> p->data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

//��������
void ListOutput(LinkList L) {
	LNode* p;
	p = L->next;
	if (p) {
		for (int i = 0; i < ListLength(L); i++) {
			cout << p->data << " ";
			p = p->next;
		}
		cout << endl;
	}
	else {
		cout << "����Ϊ��" << endl;
	}
}

//�����ĺϲ�
LinkList MergeList(LinkList& La, LinkList& Lb) {
	LNode* pa, * pb, * pc;
	pa = La->next;
	pb = Lb->next;
	LinkList Lc;
	Lc = new LNode;
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
	delete Lb;
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
		cout << "������" << endl;
	}
	ret = GetElem(La, 2, num);
	if (ret) {
		cout << num << endl;
	}
	else {
		cout << "������" << endl;
	}

	LNode* res = LocateElem(La, 5);
	if (res) {
		cout << res->data << endl;
	}
	else {
		cout << "������" << endl;
	}
    res = LocateElem(La, 2);
	if (res) {
		cout << res->data << endl;
	}
	else {
		cout << "������" << endl;
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