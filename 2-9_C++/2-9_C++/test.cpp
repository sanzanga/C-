#include <iostream>
using namespace std;

//new�Ļ����﷨
int* func()
{
	//�ڶ���������������
	//new���ص��Ǹ��������͵�ָ��
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������� �ɳ���Ա�����ٺ��ͷ�
	//�����Ҫ�ͷŶ��������ݣ����ùؼ��� delete
	delete p;

	//cout << *p << endl;//�����ͻᱨ��
	//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ���
}

//�ڶ�������new��������
void test02()
{
	//����ʮ���������ݵ����飬�ڶ���
	int* arr = new int[10];//10��������������10��Ԫ��

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//��10��Ԫ�ؽ��и�ֵ
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷŶ�������
	delete[] arr;
	//�ͷŵ������ʱ��Ҫ������һ��[]
}

int main() {

	//new�Ļ����﷨
	//test01();
	test02();
	system("pause");
	return 0;
}

//int* func()
//{
//	//����new�ؼ��� ���Խ����ݿ��ٵ�����
//	//ָ�� ������Ҳ�Ǿֲ�����  ����ջ�� ָ�뱣��������Ƿ��ڶ�����
//	int * p = new int(10);
//	return p;
//}
//
//int main() {
//
//	//�ڶ�����������
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}

////ջ����ע������ -  ��Ҫ���ؾֲ������ĵ�ַ
////ջ���������б����������ٺ��ͷ�
//
//int* func(int b)
//{
//	b = 100;//�β�Ҳ�����ջ������
//	int a = 10;//�ֲ�����  �����ջ����ջ���������ں���ִ����֮���Զ��ͷ�  ��������õ�ʱ�� �õ�ַ��������Ѿ�������������Ҫ������
//	return &a;//���ؾֲ������ĵ�ַ
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;//��һ�ο��Դ�ӡ��ȷ�����֣�����Ϊ���������˱���
//	cout << *p << endl;//�ڶ���������ݾͲ��ٱ�����
//
//	system("pause");
//	return 0;
//}


////ȫ�ֱ���
//int g = 10;//�ں���������
//int k = 10;
//
////ȫ�ֳ���
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//ȫ����
//	//ȫ�ֱ�������̬����������
//	//������ͬ�ֲ�����
//	int a = 10;
//	int b = 10;
//
//	cout << "�ֲ�����a�ĵ�ַΪ�� " << (int)&a << endl;
//	cout << "�ֲ�����b�ĵ�ַΪ�� " << (int)&b << endl;
//
//	cout << "ȫ�ֱ���g�ĵ�ַΪ�� " << (int)&g << endl;
//	cout << "ȫ�ֱ���k�ĵ�ַΪ�� " << (int)&k << endl;
//
//	//��̬����
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "��̬����s_a�ĵ�ַΪ�� " << (int)&s_a << endl;
//	cout << "��̬����s_b�ĵ�ַΪ�� " << (int)&s_b << endl;
//
//	//����
//	//�ַ�����
//	//��˫�����������Ķ����ַ�������
//	//���磺"hello world"
//	cout << "�ַ��������ĵ�ַΪ�� " << (int)&"hello world" << endl;
//
//	//const���εı���
//	//const���ε�ȫ�ֱ�����const���εľֲ�����
//
//	cout << "ȫ�ֳ���c_g_a�ĵ�ַΪ�� " << (int)&c_g_a << endl;
//	cout << "ȫ�ֳ���c_g_b�ĵ�ַΪ�� " << (int)&c_g_b << endl;
//
//	int c_l_a = 10;
//	int c_l_b = 10;
//	cout << "�ֲ�����c_l_a�ĵ�ַΪ�� " << (int)&c_l_a << endl;
//	cout << "�ֲ�����c_l_b�ĵ�ַΪ�� " << (int)&c_l_b << endl;
//
//	system("pause");
//	return 0;
//}