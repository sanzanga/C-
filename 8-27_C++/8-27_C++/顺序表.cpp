#include <iostream>
using namespace std;

#define ElemType int
#define MAXSIDE 100

typedef struct {
	ElemType* elem;
	int length;
}Sqlist;

//顺序表的初始化
void InitiList(Sqlist& L) {
	L.elem = new ElemType[MAXSIDE];
	L.length = 0;
}

//顺序表的数据输入
void ListInput(Sqlist &L,int num){
	if (num > L.length) {
		cout << "超出最大长度" << endl;
		return;
	}
	for (int i = 0; i < num; i++) {
		cin >> L.elem[i];
	}
	L.length = num;
}

//顺序表的取值
//取到第i个元素并且返回第i个元素的值
int getElem(Sqlist L, int i, ElemType& e) {
	if (i<1 || i>L.length) {
		cout << "所取值不存在" << endl;
		return 0;
	}
	e = L.elem[i - 1];
	return 1;
}

//顺序线性表的长度
int ListLength(Sqlist L) {
	return L.length;
}

//查找元素
bool LocateElem(Sqlist L, ElemType e) {
	for (int i = 0; i < L.length; i++) {
		if (L.elem[i] == e) {
			return true;
		}
	}
	cout << "查找失败" << endl;
	return false;
}

//插入元素
//将e插入到顺序表的第i个位置
void ListInsert(Sqlist& L, int i, ElemType e) {
	if (i<1 || i>L.length) {
		cout << "插入位置非法" << endl;
		return;
	}
	if (L.length == MAXSIDE) {
		cout << "顺序表已满，无法插入" << endl;
		return;
	}
	for (int j = L.length - 1; j >= i - 1; j--) {
		L.elem[j + 1] = L.elem[j];
	}
	L.elem[i - 1] = e;
	++L.length;
}

//删除顺序表中的某个元素
void DeleteList(Sqlist& L, int i) {
	if (i<1 || i>L.length) {
		cout << "删除的位置非法" << endl;
		return;
	}
	for (int j = i; j < L.length; j++) {
		L.elem[j-1] = L.elem[j];
	}
	--L.length;
}

//输出顺序表
void ListOutput(Sqlist L) {
	for (int i = 0; i < L.length; i++) {
		cout << L.elem[i] << " ";
	}
	cout << endl;
}

//顺序表的合并
void ListUnion(Sqlist& La, Sqlist& Lb) {
	int Len_La = La.length;
	int Len_Lb = Lb.length;
	int e;
	for (int i = 0; i < Len_Lb; i++) {
		getElem(Lb, i + 1, e);
		if (!LocateElem(La, e)) {
			ListInsert(La, ++Len_La, e);
		}
	}
}

//销毁顺序表
void DestroyList(Sqlist& L) {
	if (L.elem) {
		delete L.elem;
	}
}

//有序表的合并
void MergeList(Sqlist& La, Sqlist& Lb, Sqlist& Lc) {
	Lc.length = La.length + Lb.length;
	Lc.elem = new ElemType[Lc.length];
	ElemType* pa, * pb, * pc, * pa_last, * pb_last;
	pc = Lc.elem;
	pa = La.elem;
	pb = Lb.elem;
	pa_last = La.elem + La.length - 1;
	pb_last = Lb.elem + Lb.length - 1;
	while ((pa <= pa_last) && (pb <= pb_last)) {
		if (*pa <= *pb) {
			*pc++ = *pa++;
		}
		else {
			*pc++ = *pb++;
		}
	}
	while (pa <= pa_last) {
		*pc++ = *pa++;
	}
	while (pb <= pb_last) {
		*pc++ = *pb++;
	}
}

int main1() {

	Sqlist La, Lb;
	int m, n, num, ret, i;
	cout << "请输入顺序线性表的长度:" << endl;
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
		cout << "取值失败" << endl;
	}

	cin >> i;
	ret = getElem(Lb, i, num);
	if (ret) {
		cout << num << endl;
	}
	else {
		cout << "取值失败" << endl;
	}

	cout << "顺序线性表的长度为：" << ListLength(La) << endl;
	cout << "顺序线性表的长度为：" << ListLength(Lb) << endl;

	bool res = LocateElem(La, 3);
	if (res) {
		cout << "查找成功" << endl;
	}
	else {
		cout << "查找失败" << endl;
	}

	res = LocateElem(La, 2);
	if (res) {
		cout << "查找成功" << endl;
	}
	else {
		cout << "查找失败" << endl;
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


	return 0;
}