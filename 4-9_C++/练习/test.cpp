#include <iostream>
using namespace std;

//ʹ�õݹ�ʵ��n�Ľ׳�
unsigned fac(unsigned n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return fac(n - 1) * n;
	}
}

int main() {

	unsigned n;
	cout << "Please enter a positive integer:";
	cin >> n;

	unsigned y = fac(n);

	cout << n << "!=" << y << endl;

	system("pause");
	return 0;
}

//int func(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return func(n - 1) * n;
//	}
//}
//
//int main() {
//
//	int n;
//	cout << "��������Ҫ��׳˵�������";
//	cin >> n;
//
//	int ret = func(n);
//
//	cout << n << "�Ľ׳�Ϊ��" << ret << endl;
//
//	system("pause");
//	return 0;
//}

////�������������������ǵ�ƽ����
//
////ʵ��ƽ���ĺ���
//int func(int a)
//{
//	return a * a;
//}
//
////ʵ����͵ĺ���
//int add(int a, int b)
//{
//	return func(a) + func(b);
//}
//
//
//int main() {
//
//	int a, b;
//	cout << "�����������������֣�" << endl;
//	cin >> a >> b;
//
//	cout << a << "��ƽ������" << b << "��ƽ������" << add(a, b) << endl;
//
//	system("pause");
//	return 0;
//}