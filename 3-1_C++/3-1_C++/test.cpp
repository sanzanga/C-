#include <iostream>
using namespace std;

//���캯���ķ��༰����
//����
//���ղ������� �޲ι��죨Ĭ�Ϲ��죩���вι���
//�������ͷ��� ��ͨ����  ��������
class Person
{
public:

	//���캯��
	Person()
	{
		cout << "Person ���޲ι��캯���ĵ���" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person ���вι��캯���ĵ���" << endl;
	}

	//��������
	Person(const Person &p)
	{
		//���������������ϵ��������Կ��������ڵ����������
		cout << "Person �Ŀ������캯���ĵ���" << endl;
		age = p.age;
	}

	//��������
	~Person()
	{
		cout << "Person �����������ĵ���" << endl;
	}

	int age;
};

//����
void test01()
{
	//���ŷ�
	//Person p;//Ĭ�Ϻ����ĵ���
	//Person p1(10);//�вι��캯��
	////��������
	//Person p2(p1);

	//ע������
	//����Ĭ�ϵĹ��캯��ʱ�򣬲�Ҫ�ӣ���
	//Person p1();
	//�������д��룬����������Ϊ��һ����������

	/*cout << "p1������Ϊ�� " << p1.age << endl;
	cout << "p2������Ϊ�� " << p2.age << endl;*/
	
	//��ʾ��
	Person p1;
	Person p2 = Person(10);//�вι���
	Person p3 = Person(p2);//��������

	//Person(10);//�������� �ص㣺��ǰִ�н�����ϵͳ���������յ���������
	//cout << "aaaa" << endl;

	//ע������2
	//��Ҫ���ÿ������캯�� ��ʼ������
	//Person(p3);//��������ΪPerson(p3) === Person p3;���������

	//��ʽת����
	Person p4 = 10;//�൱�� д�� Person p4 = Person(10); �вι���
	Person p5 = p3;//��������

}

int main() {

	test01();

	system("pause");

	return 0;

}

////����ĳ�ʼ��������
////1�����캯�������г�ʼ������
//class Person
//{
//public:
//
//	//1�����캯��
//	//û�з���ֵҲ��дvoid
//	//������ ��������ͬ
//	//���캯�������в��� ���Է�������
//	//���������ʱ�򡣹��캯�����Զ����ã�����ֻ����һ��
//	Person()
//	{
//		cout << "Person ���캯���ĵ���" << endl;
//	}
//
//	//2���������������������Ĳ���
//	//û�з���ֵ Ҳ��дvoid
//	//��������������ͬ ������ǰ���~
//	//���������������в����ģ������Է�������
//	//����������ǰ ���Զ�������������������ֻ�����һ��
//	~Person()
//	{
//		cout << "Person ��������������" << endl;
//	}
//
//};
//
////���캯�������������Ǳ����е�ʵ�֣���������Լ����ṩ�����������ṩһ����ʵ�ֵĹ��������
//
//void test01()
//{
//	Person p;//��ջ�ϵ����ݣ�test01ִ����Ϻ��ͷ��������
//}
//
//int main() {
//
//	//Person p;
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}