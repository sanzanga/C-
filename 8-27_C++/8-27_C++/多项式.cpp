#include <iostream>
using namespace std;

#define MAXSIDE 100
#define ElemType float

typedef struct {
	ElemType* elem;
	int length;
}Sqlist;

//��ʼ���б�
void InitiList(Sqlist& L) {
	L.elem = new ElemType[MAXSIDE];
	L.length = 0;
}

//��ȡ����ʽ����
int ListLength(Sqlist L) {
	return L.length;
}

//����ʽ����
void ListInput(Sqlist& L, int len) {
	for (int i = 0; i < len; i++) {
		cin >> L.elem[i];
	}
	L.length = len;
}

//����ʽ�����
void ListAdd(Sqlist& La, Sqlist Lb) {
	for (int i = 0; i <min(ListLength(La),ListLength(Lb)) ; i++) {
		La.elem[i] += Lb.elem[i];
	}
	for (int i = min(ListLength(La), ListLength(Lb)); i < max(ListLength(La), ListLength(Lb)); i++) {
		if (ListLength(La) < ListLength(Lb)) {
			La.elem[i] = Lb.elem[i];
			La.length++;
		}
	}
}

//���
void ListOutput(Sqlist L) {
	for (int i = 0; i < ListLength(L); i++) {
		cout << L.elem[i] << " ";
	}
	cout << endl;
}

int main1() {

	Sqlist La, Lb;
	InitiList(La);
	InitiList(Lb);

	ListInput(La, 4);
	ListInput(Lb, 5);

	ListOutput(La);
	ListOutput(Lb);

	ListAdd(La, Lb);
	ListOutput(La);

	return 0;
}