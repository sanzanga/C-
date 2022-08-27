#include <iostream>
using namespace std;

#define ElemType1 int
#define ElemType2 float

typedef struct PNode {
	float coef;
	int expn;
	PNode* next;
}PNode,*Polynomial;

//初始化
void InitiList(Polynomial& p) {
	p = new PNode;
	p->next = NULL;
}

//创建多项式
void CreatePolynomial(Polynomial& p, int n) {
	PNode* pre = new PNode;
	PNode* q = new PNode;
	for (int i = 0; i < n; i++) {
		PNode* s = new PNode;
		cin >> s->coef >> s->expn;
		pre = p;
		q = p->next;
		while (q && q->expn < s->expn) {
			pre = q;
			q = q->next;
		}
		s->next = q;
		pre->next = s;
	}
}

//多项式相加
void AddPolyn(Polynomial& Pa, Polynomial& Pb) {
	PNode* p1, * p2, * p3, * r;
	float sum = 0;
	p1 = new PNode; p2 = new PNode; p3 = new PNode;
	r = new PNode;
	p1 = Pa->next; p2 = Pb->next; p3 = Pa;
	while (p1 && p2) {
		if (p1->expn == p2->expn) {
			sum = p1->coef + p2->coef;
			if (sum != 0) {
				p1->coef = sum;
				p3->next = p1;
				p3 = p1;
				p1 = p1->next;
				r = p2;
				p2 = p2->next;
				delete r;
			}
			else {
				r = p1;
				p1 = p1->next;
				delete r;
				r = new PNode;
				r = p2;
				p2 = p2->next;
				delete r;
			}
		}
		else if (p1->expn < p2->expn) {
			p3->next = p1;
			p3 = p1;
			p1 = p1->next;
		}
		else {
			p3->next = p2;
			p3 = p2;
			p2 = p2->next;
		}
	}
	p3->next = p1 ? p1 : p2;
	delete Pb;
}

//获取链表的长度
int getListLength(Polynomial P) {
	PNode* p = new PNode;
	int j = 0;
	p = P->next;
	while (p) {
		j++;
		p = p->next;
	}
	return j;
}

void PolynomialOutput(Polynomial P) {
	PNode* p = new PNode;
	p = P->next;
	for (int i = 0; i < getListLength(P); i++) {
		cout << P->coef << " " << P->expn << endl;
		p = p->next;
	}
}

int main() {

	Polynomial Pa, Pb;
	InitiList(Pa);
	InitiList(Pb);

	CreatePolynomial(Pa, 3);
	CreatePolynomial(Pb, 2);

	PolynomialOutput(Pa);
	PolynomialOutput(Pb);

	return 0;
}