#include <iostream>
using namespace std;

int main2() {

	//���ͣ�1.short(2)  2.int(4)   3.long(4)   4.long long(8) 
	//��������sizeof����������͵Ĵ�С
	//�﷨��sizeof(��������/������
	
	short num1 = 10;
	cout << "shortռ���ڴ�ռ�Ϊ��" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�ռ�Ϊ��" << sizeof(num2) << endl;

	long num3 = 10;
	cout << "longռ���ڴ�ռ�Ϊ��" << sizeof(num3) << endl;

	long long num4 = 10;
	cout << "long longռ���ڴ�ռ�Ϊ��" << sizeof(num4) << endl;

	//���ʹ�С�ıȽ�
	//short<int<=long<long long 

	system("pause");
	return 0;
}