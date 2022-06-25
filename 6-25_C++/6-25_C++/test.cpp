#include <iostream>
using namespace std;
#include <string>

//ģ�尸��
//1�����Զ��������������Լ��Զ������͵����ݽ��д洢
//2���������е����ݴ洢������
//3�����캯���п��Դ������������
//4���ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
//5���ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
//6������ͨ���±���������е�Ԫ��
//7�����Ի�ȡ�����е�ǰԪ�صĸ��������������

//�Լ���ͨ�õ�������
template<class T>
class MyArray
{
public:

	//�вι��� ��������
	MyArray(int capacity)
	{
		cout << "MyArray���вι���" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		cout << "MyArray�Ŀ�������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		//���
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݿ�������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		cout << "MyArray��operator=�ĵ���" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void Push_Back(const T& val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//�������ִ�С

	}

	//βɾ��
	void Pop_Back()
	{
		//���û���Ҫ���ʵ����һ��Ԫ�ؾ���βɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//���û�����ͨ���±�������Ԫ�� arr[0]=100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//�������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "MyArray����������" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
	
private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capacity;//��������

	int m_Size;//�����С
};

void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ�����" << endl;
	printArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printArray(arr2);

	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ����" << endl;
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;
	printArray(arr2);

	/*MyArray<int>arr2(arr1);

	MyArray<int>arr3(100);
	arr3 = arr1;*/
}

//�����Զ�����������
class Person
{
public:
	Person(){}

	Person(string name, int age)
	{
		this->age = age;
		this->name = name;
	}

	string name;
	int age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "name:" << arr[i].name << "  age:" << arr[i].age << endl;
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

	//�������
	cout << "arr����Ϊ��" << arr.getCapacity() << endl;
	//�����С
	cout << "arr�Ĵ�СΪ��" << arr.getSize() << endl;


}

int main() {

	//test01();

	test02();

	system("pause");
	return 0;
}





////��ǰ�ñ�����֪��Person�Ĵ���
//template<class T1,class T2>
//class Person;
//
////����ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "����ʵ��" << endl;
//	cout << "name:" << p.name << endl;
//	cout << "age:" << p.age << endl;
//}
//
////ͨ��ȫ�ֺ�����ӡPerson��Ϣ
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	friend void printPerson(Person<T1, T2>p)
//	{
//		cout << "name:" << p.name << endl;
//		cout << "age:" << p.age << endl;
//	}
//
//	//ȫ�ֺ��� ����ʵ��
//	//�ӿ�ģ��Ĳ����б�
//	//���ȫ�ֺ���������ʵ�ֵģ���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2>p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//
//private:
//	T1 name;
//	T2 age;
//};
//
////ȫ�ֺ������ڵ�ʵ��
//void test01()
//{
//	Person<string, int>p("����", 10);
//
//	printPerson(p);
//}
//
////ȫ�ֺ�������ʵ��
//void test02()
//{
//	Person<string, int>p("����", 20);
//
//	printPerson2(p);
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