#include <iostream>
using namespace std;

#include <string>

//���һ��ѧ���ࡣ������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

class Student
{
public://����Ȩ��

	//���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
	//����  ��Ա����   ��Ա����
	//��Ϊ  ��Ա����   ��Ա����

	//����
	string name;
	int m_Id;

	//��Ϊ
	//��ʾѧ��������ѧ�ŵĺ���
	void showStudent()
	{
		cout << "������ " << name << " ѧ�ţ� " << m_Id << endl;
	}

	//��������ֵ
	void setName(string m_name)
	{
		name = m_name;
	}

	//��ѧ�Ž��и�ֵ
	void setId(int id)
	{
		m_Id = id;
	}
};

int main() {

	//����һ�������ѧ��  ʵ��������
	Student s1;
	//��s1���� �������Ը�ֵ����
	//s1.name = "����";
	s1.setName("����");
	//s1.m_Id = 1;
	s1.setId(1);

	//��ʾѧ����Ϣ
	s1.showStudent();

	Student s2;
	s2.name = "lisi";
	s2.m_Id = 2;
	s2.showStudent();

	system("pause");
	return 0;
}

//class Student
//{
//	//����Ȩ��
//public:
//
//	//����
//	string name;
//	string id;
//
//	//��ӡѧ����������ѧ��
//	void print(string str1,string str2)
//	{
//		cout << "ѧ���������ǣ� " << str1 << "ѧ���ǣ� " << str2 << endl;
//	}
//};
//
//int main() {
//
//	Student stu;
//	stu.name = "����";
//	stu.id = "123456";
//
//	stu.print(stu.name,stu.id);
//
//	system("pause");
//	return 0;
//}

//const double PI = 3.14;
//
////���һ��Բ�࣬��Բ���ܳ�
//
////class �������һ���࣬���������ŵľ����������
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//
//	//����
//	//�뾶
//	int m_r;
//
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main() {
//
//	//ͨ��Բ�� ���������Բ������
//	//ʵ���� ��ͨ��һ���� ����һ������Ĺ��̣�
//	Circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.m_r = 10;
//
//	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;
//
//	system("pause");
//	return 0;
//}

////�������ص�ע������
////1��������Ϊ���ص�����
//void func(int& a)//int &a=10;���Ϸ���
//{
//	cout << "fun (int& a) ����" << endl;
//}
//
//void func(const int& a)//const int &a = 10;�Ϸ���
//{
//	cout << "fun (const int& a) ����" << endl;
//}
//
////2��������������Ĭ�ϲ���
//void func2(int a,int b = 10)
//{
//	cout << "func2 (int a, int b) �ĵ��� " << endl;
//}
//
//void func2(int a)
//{
//	cout << "func2 (int a) �ĵ��� " << endl;
//}
//
//int main() {
//
//	/*int a = 10;
//	func(a);*/
//
//	//func(10);
//
//	//func(10);//����
//
//	system("pause");
//	return 0;
//}

////��������
////�����ú�������ͬ����߸�����
//
////�������ص���������
////1��ͬһ����������
////2������������ͬ
////3�������������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//void func()
//{
//	cout << "func �ĵ���" << endl;
//}
//
//void func(int a)
//{
//	cout << "func (int a) �ĵ���!" << endl;
//}
//
//void func(double a)
//{
//	cout << "func (double a) �ĵ���!" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func (int a, double b) �ĵ���" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func (double a, int b) �ĵ���" << endl;
//}
//
////ע������
////�����ķ���ֵ��������Ϊ�������ص�����
////int func(double a, int b)
////{
////	cout << "func (double a, int b) �ĵ���" << endl;
////}
//
//int main() {
//
//	//func();
//	//func(10);
//	//func(3.14);
//	//func(10, 3.14);
//	func(3.14, 10);
//
//	system("pause");
//	return 0;
//}

////ռλ����
////����ֵ����  ������ ���������ͣ�{}
//
////Ŀǰ�׶ε�ռλ���������ǻ��ò���������Ŀγ��л��õ�
////ռλ������������Ĭ�ϲ���
//void func(int a , int = 10)
//{
//	cout << "tihs is func " << endl;
//}
//
//int main() {
//
//	func(10);
//
//	system("pause");
//	return 0;
//}

////������Ĭ�ϲ���
//
////��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
////�﷨������ֵ���� ������ (�β� = Ĭ��ֵ) {}
//int func(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
////ע�����
////1�����ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ���������Ĭ��ֵ
////int func2(int a, int b = 10, int c)
////{
////	return a + b + c;
////}
//
////2�����������������Ĭ��ֵ��������ʵ�־Ͳ�����Ĭ��ֵ
////������ʵ��ֻ����һ����Ĭ�ϲ���
//int func2(int a, int b);
//
//int func2(int a = 20, int b = 20)
//{
//	return a + b;
//}
//
//int main() {
//
//	//cout << func(10, 30) << endl;
//
//	cout << func2() << endl;
//
//	system("pause");
//	return 0;
//}