#include <iostream>
using namespace std;

int main6() {

	//��Ŀ�����

	//������������a b c
	//��a��b���Ƚϣ��������Ĵ��ֵ��������c

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);

	cout << "c=" << c << endl;

	//��C++����Ŀ���������ֵ�ı��������Լ�����ֵ
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}