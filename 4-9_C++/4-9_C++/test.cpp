#include <iostream>
using namespace std;
#include "MyArray.hpp"
#include <string>

void printIntArrar(MyArray<int>&arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

//��ģ�尸��
//ʵ��һ��ͨ�õ�������
void test01()
{
	MyArray<int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}

	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printIntArrar(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	printIntArrar(arr1);

	//βɾ
	arr2.Pop_Back();
	cout << "arr2Ϊβɾ��" << endl;
	cout << "arr2��������" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�С��" << arr2.getSize() << endl;

	/*MyArray<int>arr1(5);

	MyArray<int>arr2(arr1);

	MyArray<int>arr3(100);
	arr3 = arr1;*/
}

//�����Զ�������
class Person
{
public:
	Person(){}
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person>arr(10);

	Person p1("����", 10);
	Person p2("����", 20);
	Person p3("����", 30);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);

	//��ӡ����
	printPersonArray(arr);

	//��������ʹ�С
	cout << "arr��������" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�С��" << arr.getSize() << endl;
}

int main() {

	//test01();

	test02();

	system("pause");
	return 0;
}