#include <iostream>
using namespace std;

int main() {

	//�߼������ �� ��
	int a = 10;

	//��C++�� ����0������
	cout << !a << endl;

	cout << !!a << endl;

	//�߼��� &&
	//����������Ϊ�棬�����Ϊ��
	//ͬ��Ϊ�� ����Ϊ��

	a = 10;
	int b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//�߼��� ||
	//ͬ��Ϊ�� ����Ϊ��
	a = 10;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;


	system("pause");
	return 0;
}