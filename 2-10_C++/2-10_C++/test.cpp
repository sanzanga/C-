#include <iostream>
using namespace std;

//��ӡ���ݵĺ���
void showValue(const int &val)
{
	//val = 1000;
	cout << "val=" << val << endl;
}

int main() {

	//��������
	//ʹ�ó��������������βΣ���ֹ�����

	//int a = 10;
	//const int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
	////����const֮�󣬱������������޸�Ϊ��int temp = 10;const int & ref = temp;
	//ref = 20;//����const֮���Ϊֻ���������Խ����޸�

	int a = 100;
	showValue(a);

	system("pause");
	return 0;
}

////���������� ת��Ϊ int* const ref = &a;
//void func(int& ref)
//{
//	ref = 100;//ref�����ã�ת��Ϊ *ref = 100��
//}
//
//int main() {
//
//	int a = 10;
//
//	//�Զ�ת��Ϊ int* const ref = &a;
//	//ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò����Ը���
//	int& ref = a;
//	ref = 20;//�ڲ�����ref�����ã��Զ�ת���� *ref = 20;
//
//	cout << "a=" << a << endl;
//	cout << "ref=" << ref << endl;
//
//	system("pause");
//	return 0;
//}

////�����������ķ���ֵ
////1����Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;//�ֲ���������������е�ջ��
//	return a;
//}
//
////2�������ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬�����������ȫ������ȫ�����ϵ������ڳ��������ϵͳ�ͷ�
//	return a;
//}
//
//int main() {
//
//	//int& ref = test01();
//
//	//cout << "ref=" << ref << endl;//��һ�ν����ȷ�����������˱���
//	//cout << "ref=" << ref << endl;//�ڶ��ν��������Ϊa�Ѿ��ͷ�
//
//	int& ref2 = test02();
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	test02() = 1000;//��������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ
//
//	cout << "ref2=" << ref2 << endl;
//	cout << "ref2=" << ref2 << endl;
//
//	system("pause");
//	return 0;
//}

////��������
//
////1��ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01a=" << a << endl;
//	cout << "swap01b=" << b << endl;
//
//}
//
////2����ַ����
//void mySwap02(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
////���ô���
//void mySwap03(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	//mySwap02(&a, &b);//��ַ���ݣ��βλ�����ʵ��
//	mySwap03(a, b);//���ô��ݣ��βλ������β�
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a = 10;
//	//int& b = a;
//	//1�����ñ����ʼ��
//	//int& b;//err
//	int& b = a;
//
//	//2�����ó�ʼ���󣬲����Ըı�
//	int c = 20;
//	b = c;//��ֵ�����������Ǹ�������
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//	cout << "c=" << c << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//���û����﷨
//	//�������� &���� = ԭ��
//
//	int a = 10;
//	//��������
//	int& b = a;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	b = 100;
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}