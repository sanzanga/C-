#include <iostream>
using namespace std;
#include <stack>
#include <queue>
#include <string>
#include <list>

//排序案例
//案例描述：将Person自定义数据类型进行排序，Person中属性有姓名，年龄，身高
//排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
class Person
{
public:
	Person(string name, int age, int height)
	{
		this->age = age;
		this->height = height;
		this->name = name;
	}

	string name;
	int age;
	int height;
};

//指定排序规则
bool comparePerson(Person& p1,Person& p2)
{
	//按照年龄
	if (p1.age == p2.age)
	{
		//年龄相同
		return p1.height > p2.height;
	}
	else
	{
		return p1.age < p2.age;
	}
	
}

void test01()
{
	list<Person>L;//创建容器
	
	//准备数据
	Person p1("张三1", 35, 175);
	Person p2("张三2", 45, 180);
	Person p3("张三3", 40, 170);
	Person p4("张三4", 25, 190);
	Person p5("张三5", 35, 160);
	Person p6("张三6", 35, 200);

	//插入数据
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).name << "  年龄：" << (*it).age << "  身高：" << (*it).height << endl;

	}
	cout << "-------------------------------" << endl;
	cout << "排序后：" << endl;

	L.sort(comparePerson);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "姓名：" << (*it).name << "  年龄：" << (*it).age << "  身高：" << (*it).height << endl;
	}
}

int main() {

	test01();

	system("pause");
	return 0;
}




////list容器反转和排序
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//反转
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "反转前：" << endl;
//	printList(L1);
//
//	//反转
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//}
//
//bool myCompare(int v1,int v2)
//{
//	//降序 就让第一个数>第二个数
//	return v1 > v2;
//}
//
////排序
//void test02()
//{
//	list<int>L1;
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	cout << "排序后：" << endl;
//	//L1.sort(L1.begin(),L1.end());
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供对应一些算法
//
//	L1.sort();//默认排序规则：从小到大 升序
//	printList(L1);
//
//	L1.sort(myCompare);//降序
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}



////list数据存取
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(50);
//
//	//L1[0]不可以用[]访问list容器中的元素
//	//L1.at(0);//不可以利用at访问list容器中的元素
//	//原因：list本质是链表，不是连续线性空间存储数据，迭代器也是不支持随机访问的
//
//	cout << "第一个元素：" << L1.front() << endl;
//	cout << "最后一个元素：" << L1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;//支持双向
//	//it=it+1;//这样就是错的 不支持随机访问
//
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////list插入和删除
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L;
//
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//300 200 100 10 20 30
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	//300 200 100 10 20 
//	printList(L);
//
//	//头删
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert 插入
//	list<int>::iterator it = L.begin();
//	it++;
//	L.insert(it, 1000);
//	//200 1000 100 10 20
//	printList(L);
//
//	//删除
//	it = L.begin();
//	L.erase(it);
//	//1000 100 10 20
//	printList(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//清空
//	L.clear();
//	printList(L);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////list大小操作
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "容器L1为空" << endl;
//	}
//	else
//	{
//		cout << "容器L1不为空" << endl;
//		cout << "L1的元素个数：" << L1.size() << endl;
//	}
//
//	//重新指定大小
//	L1.resize(10,1000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////list容器赋值和交换
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////赋值
//void test01()
//{
//	list<int>L1;
//	
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;//operator=赋值
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L3);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
////交换
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//
//	cout << "交换后：" << endl;
//	L1.swap(L2);
//	printList(L1);
//	printList(L2);
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}





////list构造函数
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//创建list容器
//	list<int>L1;//默认构造
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//遍历容器
//	printList(L1);
//
//	//按照区间进行构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////队列容器queue常用接口
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	string name;
//	int age;
//};
//
//void test01()
//{
//	//创建队列
//	queue<Person>q;
//	//准备数据
//	Person p1("张三", 10);
//	Person p2("李四", 20);
//	Person p3("王五", 30);
//	Person p4("赵六", 40);
//	//入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	cout << "队列大小：" << q.size() << endl;
//	//判断队列不为空，查看对头，查看对位，出队
//	while (!q.empty())
//	{
//		//查看队头
//		cout << "队头元素—————姓名：" << q.front().name << "   年龄：" << q.front().age << endl;
//		//查看队尾
//		cout << "队尾元素—————姓名：" << q.back().name << "   年龄：" << q.back().age << endl;
//		//出队
//		q.pop();
//	}
//	cout << "队列大小：" << q.size() << endl;
//}
//
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////栈stack容器的常用接口
//
//void test01()
//{
//	//特点：符合先进后出的数据结构
//	stack<int>s;
//	//入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "栈的大小：" << s.size() << endl;
//
//	//只要栈不为空，查看栈顶，并且执行出栈操作
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素为：" << s.top() << endl;
//		//出栈
//		s.pop();
//	}
//	cout << "栈的大小：" << s.size() << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}