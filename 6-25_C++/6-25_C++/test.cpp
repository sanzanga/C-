#include <iostream>
using namespace std;
#include <string>

//模板案例
//1、可以对内置数据类型以及自定义类型的数据进行存储
//2、将数组中的数据存储到堆区
//3、构造函数中可以传入数组的容量
//4、提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//5、提供尾插法和尾删法对数组中的数据进行增加和删除
//6、可以通过下标访问数组中的元素
//7、可以获取数组中当前元素的个数和数组的容量

//自己的通用的数组类
template<class T>
class MyArray
{
public:

	//有参构造 参数容量
	MyArray(int capacity)
	{
		cout << "MyArray的有参构造" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//拷贝构造
	MyArray(const MyArray& arr)
	{
		cout << "MyArray的拷贝构造" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;

		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		//将arr中的数据拷贝过来
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= 防止浅拷贝问题
	MyArray& operator=(const MyArray& arr)
	{
		cout << "MyArray的operator=的调用" << endl;
		//先判断原来堆区是否有数据，如果有先释放
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法
	void Push_Back(const T& val)
	{
		//判断容量是否等于大小
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;//在数组末尾插入数据
		this->m_Size++;//更新数字大小

	}

	//尾删法
	void Pop_Back()
	{
		//让用户不要访问到最后一个元素就是尾删法
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//让用户可以通过下标来访问元素 arr[0]=100
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组的容量
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组大小
	int getSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "MyArray的析构构造" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}
	
private:
	T* pAddress;//指针指向堆区开辟的真实数组

	int m_Capacity;//数组容量

	int m_Size;//数组大小
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
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出：" << endl;
	printArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);
	cout << "arr2的打印输出为：" << endl;
	printArray(arr2);

	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删法后：" << endl;
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;
	printArray(arr2);

	/*MyArray<int>arr2(arr1);

	MyArray<int>arr3(100);
	arr3 = arr1;*/
}

//测试自定义数据类型
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
	Person p1("张三", 10);
	Person p2("李四", 20);
	Person p3("王五", 30);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);

	//打印数组
	printPersonArray(arr);

	//输出容量
	cout << "arr容量为：" << arr.getCapacity() << endl;
	//输出大小
	cout << "arr的大小为：" << arr.getSize() << endl;


}

int main() {

	//test01();

	test02();

	system("pause");
	return 0;
}





////提前让编译器知道Person的存在
//template<class T1,class T2>
//class Person;
//
////类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>p)
//{
//	cout << "类外实现" << endl;
//	cout << "name:" << p.name << endl;
//	cout << "age:" << p.age << endl;
//}
//
////通过全局函数打印Person信息
//
//template<class T1,class T2>
//class Person
//{
//	//全局函数 类内实现
//	friend void printPerson(Person<T1, T2>p)
//	{
//		cout << "name:" << p.name << endl;
//		cout << "age:" << p.age << endl;
//	}
//
//	//全局函数 类外实现
//	//加空模板的参数列表
//	//如果全局函数是类外实现的，需要让编译器提前知道这个函数的存在
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
////全局函数类内的实现
//void test01()
//{
//	Person<string, int>p("张三", 10);
//
//	printPerson(p);
//}
//
////全局函数类外实现
//void test02()
//{
//	Person<string, int>p("李四", 20);
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