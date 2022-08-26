#include <iostream>
using namespace std;

#define ElemType int
#define MAXSIDE 100
#define OVERFLOW -2

//���Ա�
typedef struct {
	ElemType* elem;
	int length;
}Sqlist;

//˳���ĳ�ʼ��
void InitiList(Sqlist& L) {
	L.elem = new ElemType[MAXSIDE];
	L.length = 0;
}

//˳������������
void ListInput(Sqlist& L,int num) {
	int i = 0;
	if (num > MAXSIDE) {
		cout << "������󳤶�" << endl;
		return;
	}
	for (int j = 0; j < num; j++) {
		cin >> L.elem[j];
	}
	L.length = num;
}

//˳����ȡֵ
//ȡ����i��Ԫ�ز��ҷ��ص�i��Ԫ�ص�ֵ
int getElem(Sqlist L, int i, ElemType& e) {
	if (i<1 || i>L.length) {
		return 0;
	}
	e = L.elem[i - 1];
	return 1;
}

//˳�����Ա�ĳ���
int getLength(Sqlist L) {
	return L.length;
}

//����Ԫ��
bool LocateElem(Sqlist L, ElemType e) {
	for (int i = 0; i < L.length; i++) {
		if (L.elem[i] == e) {
			return true;
		}
	}
	return false;
}

//����Ԫ��
//��e���뵽˳���ĵ�i��λ��
void ListInsert(Sqlist& L, int i, ElemType e) {
	if (i<1 || i>L.length + 1) {
		cout << "����λ�÷Ƿ�" << endl;
		return;
	}
	if (L.length == MAXSIDE) {
		cout << "������" << endl;
		return;
	}
	for (int j = L.length - 1; j >= i - 1; j--) {
		L.elem[j + 1] = L.elem[j];
	}
	L.elem[i - 1] = e;
	++L.length;
}

//ɾ��˳����е�ĳ��Ԫ��
void DeleteList(Sqlist& L, int i) {
	if (i<1 || i>L.length) {
		cout << "ɾ��λ�÷Ƿ�" << endl;
		return;
	}
	for (int j = i; j < L.length; j++) {
		L.elem[j - 1] = L.elem[j];
	}
	--L.length;
}

//���˳���
void ListOutput(Sqlist L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.elem[i] << " ";
	}
	cout << endl;
}

//˳���ĺϲ�
void ListUnion(Sqlist& La, Sqlist& Lb) {
	int Len_La, Len_Lb, e;
	Len_La = La.length;
	Len_Lb = Lb.length;
	for (int i = 0; i < Len_Lb; i++) {
		getElem(Lb, i + 1, e);//ȡLb���е�i�����ݸ�ֵ��e
		if (!LocateElem(La, e)) {
			ListInsert(La, ++Len_La, e);
		}
	}
}

//����˳���
void DestroyList(Sqlist& L) {
	if (L.elem) {
		delete L.elem;
	}
}

int main1() {
	Sqlist La, Lb;
	int m, n, num, ret, i;
	cout << "������˳�����Ա�ĳ���:" << endl;
	cin >> m >> n;
	InitiList(La);
	InitiList(Lb);

	ListInput(La, m);
	ListInput(Lb, n);

	cin >> i;
	ret = getElem(La, i, num);
	if (ret) {
		cout << num << endl;
	}
	else {
		cout << "ȡֵʧ��" << endl;
	}

	cin >> i;
	ret = getElem(Lb, i, num);
	if (ret) {
		cout << num << endl;
	}
	else {
		cout << "ȡֵʧ��" << endl;
	}

	cout << "˳�����Ա�ĳ���Ϊ��" << getLength(La) << endl;
	cout << "˳�����Ա�ĳ���Ϊ��" << getLength(Lb) << endl;

	bool res = LocateElem(La, 3);
	if (res) {
		cout << "���ҳɹ�" << endl;
	}
	else {
		cout << "����ʧ��" << endl;
	}

	res = LocateElem(La, 2);
	if (res) {
		cout << "���ҳɹ�" << endl;
	}
	else {
		cout << "����ʧ��" << endl;
	}

	ListInsert(La, 2, 4);
	ListOutput(La);
	ListInsert(La, 4, 5);
	ListOutput(La);
	ListInsert(La, 4, 9);
	ListOutput(La);

	DeleteList(La, 4);
	ListOutput(La);
	DeleteList(La, 1);
	ListOutput(La);

	ListOutput(Lb);

	ListUnion(La, Lb);
	ListOutput(La);

	DestroyList(La);
	DestroyList(Lb);

	system("pause");
	return 0;
}