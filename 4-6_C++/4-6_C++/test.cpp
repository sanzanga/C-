#include <iostream>
#include <string>
using namespace std;

//ģ��ľ�����
//ģ�岢�������ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯��ʽ������ʵ��\

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	//����
	string m_Name;
	//����
	int m_Age;
};

//�Ա��������Ƿ���ȵĺ���
template<class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//���þ��廯Person�İ汾���ִ��𣬾��廯���ȵ���
template<> bool myCompare(Person& a, Person& b)
{
	if (a.m_Name == b.m_Name && a.m_Age == b.m_Age)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void test01()
{
	int a = 10;
	int b = 20;

	bool ret = myCompare(a, b);

	if (ret == true)
	{
		cout << "a=b" << endl;
	}
	else
	{
		cout << "a!=b" << endl;
	}
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 20);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1==p2" << endl;
	}
	else
	{
		cout << "p1!=p2" << endl;
	}
}

int main() {

	test01();

	test02();

	system("pause");
	return 0;
}

////��ͨ�����ͺ���ģ��ĵ��ù���
////1���������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
////2������ͨ����ģ��Ĳ����б���ú���ģ��
////3������ģ����Է�����������
////4���������ģ����Է������õ�ƥ�䣬���ȵ��ú���ģ��
//
//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "���ú�����ģ��" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "�������ص�ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//
//	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
//	char a1 = 'a';
//	char b1 = 'b';
//
//	myPrint(a1, b1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////��ͨ�����ͺ���ģ�������
////1����ͨ�������ÿ��Է�����ʽ����ת��
////2������ģ�� ���Զ������Ƶ� �����Է�����ʽ����ת��
////3������ģ�� ����ʾָ������ ���Է�����ʽ����ת��
//
////��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';//a-97 c-99
//	cout << myAdd01(a, c) << endl;//���ַ�����ʽת����int����
//
//	//�Զ������Ƶ�
//	cout << myAdd02(a, b) << endl;
//	//cout << myAdd02(a, c) << endl;//���󣬲�֪����ת��int���ͻ���char����
//
//	//��ʾ����ת��
//	cout << myAdd02<int>(a, c) << endl;//������int���ͣ���ʹc����int����Ҳ����int����
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////����ģ�尸��
////ʵ��һ��ͨ�õĶ������������
////�Ӵ�С ѡ������
////���� char int ����������
//
////ʵ�ֽ�����ģ��
//template<class T>
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨
//template<class T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ���±�
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])//�����϶������ֵ�ȱ���������ֵҩЧ��˵��j�±��Ԫ�ز������������ֵ
//			{
//				max = j;//�������ֵ��С��
//			}
//		}
//		if (max != i)
//		{
//			//����max��i�±��Ԫ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////�ṩ��ӡ��ģ��
//template<class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//void test01()
//{
//	//����char����
//	char charArr[] = "bdecaf";
//	int num = sizeof(charArr) / sizeof(charArr[0]);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//����int����
//	int intArr[] = { 2,1,4,3,6,5 };
//	int num = sizeof(intArr) / sizeof(intArr[0]);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}

////����ģ��ע������
//template<typename T>//typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////1���Զ������Ƶ��������Ƶ���һ�µ��������Ͳſ���
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	mySwap(a, b);//��ȷ
//	//mySwap(a, c);//���� �Ƶ�����һ�µ�T����
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//}
//
////2��ģ�����Ҫȷ����T�����ͣ��ſ���ʹ��
//template<class T>
//void func()
//{
//	cout << "func����" << endl;
//}
//
//void test02()
//{
//	func<int>();
//}
//
//int main() {
//
//	test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}

////����ģ��
////�������ν�������
//void swapInt(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������ͺ���
//void swapDouble(double& a, double& b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
//template<typename T>//����һ��ģ�壬���߱�������������н�����T��Ҫ����T��һ��ͨ����������
//void mySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//	//���ú���ģ����н���
//	//���ַ�ʽʹ�ú���ģ��
//	//1���Զ������Ƶ�
//	mySwap(a, b);
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	double c = 1.1;
//	double d = 2.2;
//	//swapDouble(c, d);
//	//2����ʾָ������
//	mySwap<double>(c, d);
//	cout << "c=" << c << endl;
//	cout << "d=" << d << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}