#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>//标准算法头文件
#include <vector>
#include <string>
#include <time.h>

//STL案例-评委打分
//有5名选手，选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分
/*
* 实现步骤：
* 创建五名选手 放到vector容器中
* 遍历vector容器，取出来每一名选手，执行for循环，可以吧10名评委打分存到deque容器中
* sort算法对deque容器中分数排序，去除最高分和最低分
* deque容器遍历一遍，累加总分
* 获取平均分
*/

//选手类
class Person
{
public:
	Person(string name, int score)
	{
		this->name = name;
		this->score = score;
	}

	string name;
	int score;
};

void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);
		//将创建的Person对象 放入到容器中
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>& v)
{
	//srand((unsigned)time(NULL));
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放到deque容器中
		deque<int>d;
		//srand((unsigned)time(NULL));
		for (int i = 0; i < 10; i++)
		{
			//srand((unsigned)time(NULL));
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		cout << "选手：" << it->name << "   打分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			cout << *dit << " ";
		}
		cout << endl;

		//先排序
		sort(d.begin(), d.end());
		//去除最低和最高分
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;//累加每个评委的分数
		}
		int avg = sum / d.size();
		//将平均分赋值给选手身上
		it->score = avg;
	}
}

void showScore(vector<Person>& p)
{
	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
	{
		cout << "name:" << it->name << "   avg:" << it->score << endl;
	}
}

int main() {
	//添加随机数种子
	srand((unsigned)time(NULL));

	//1、创建5名选手
	vector<Person>v;//存放选手的容器
	creatPerson(v);
	//测试
	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "name:" << (*it).name << "   score:" << (*it).score << endl;
	}*/

	//2、给5名选手打分
	setScore(v);

	//3、显示最后得分
	showScore(v);

	system("pause");
	return 0;
}




////deque排序
////利用算法实现对deque容器进行排序
////sort(iterator beg,iterator end);//对beg和end区间内元素进行排序
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	//300 200 100 10 20 30
//	printDeque(d);
//
//	//排序 默认排序规则 从小到大 升序
//	//对于支持随机访问迭代器的容器，都可以利用sort算法直接对其进行排序
//	//vector容器也可以利用sort进行排序
//	sort(d.begin(), d.end());
//	cout << "排序后：" << endl;
//	printDeque(d);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////deque数据存取
///*
//* at(int idx);//返回索引idx所指的数据
//* operator[];//返回索引[idx]所指的数据
//* front();//返回容器中第一个数据元素
//* back();//返回容器中最后一个数据元素
//*/
//
//void test01()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_back(30);
//	d1.push_front(100);
//	d1.push_front(200);
//	d1.push_front(300);
//
//	//通过[]方式访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1[i] << " ";
//	}
//	cout << endl;
//
//	//通过at方式访问元素
//	for (int i = 0; i < d1.size(); i++)
//	{
//		cout << d1.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为：" << d1.front() << endl;
//	cout << "最后一个元素为：" << d1.back() << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}



////deque插入和删除
///*
//* 两端插入操作
//* push_back(elem);//在容器尾部添加一个数据
//* push_front(elem);//在容器头部插入一个数据
//* pop_back();//删除容器最后一个数据
//* pop_front();//删除容器第一个数据
//* 指定位置操作
//* insert(pos,elem);//在pos位置插入一个elem元素的拷贝，返回新数据位置
//* insert(pos,n,elem);//在pos位置插入n个elem数据，无返回值
//* insert(pos,beg,end);//在pos位置插入[beg,end)区间的数据，无返回值
//* clear();//清空容器的所有数据
//* erase(beg,end);//删除[beg,end)区间的数据，返回下一个数据的位置
//* erase(pos);//删除pos位置的数据，发挥下一个数据的位置
//*/
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////两端操作
//void test01()
//{
//	deque<int>d1;
//
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	printDeque(d1);
//
//	//头删
//	d1.pop_front();
//	printDeque(d1);
//}
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	//1000 200 100 10 20
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	//10000 10000 1000 200 100 10 20 
//	printDeque(d1);
//
//	//按照区间进行插入
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	//200 100 10 20
//	printDeque(d1);
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//
//	//按区间的方式删除
//	//d1.erase(d1.begin(), d1.end());
//	//清空
//	d1.clear();
//	printDeque(d1);
//}
//
//int main() {
//
//	//test01();
//
//	//test02();
//
//	test03();
//
//	system("pause");
//	return 0;
//}



////deque大小操作
///*
//* deque.empty();//判断容器是否为空
//* deque.size();//返回容器中元素的个数
//* deque.resize(num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置
//* 如果容器变短，则末尾超出容器长度的元素被删除
//* deque.resize(num,int elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置
//* 如果容器变短，则末尾超出容器长度的元素被删除
//*/
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d2不为空" << endl;
//		cout << "d1的大小为：" << d1.size() << endl;
//		//deque没有容量capacity概念
//	}
//
//	//重新指定大小
//	//d1.resize(15);
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////deque赋值操作
///*
//* deque& operator=(const deque &deq);//重载等号操作符
//* assign(beg,end);//将[beg,end)区间中的数据拷贝赋值给本身
//* assign(n,elem);//将n个elem拷贝赋值给本身
//*/
//
//void printDeque(const deque<int>d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator=赋值
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign赋值
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main() { 
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////deque构造函数
///*
//* deque<T> deqT;//默认构造函数
//* deque(beg,end);//构造函数将[beg,end)区间中的元素拷贝给本身
//* deque(n,elem);//构造函数将n个elem拷贝给本身
//* deque(const deque &deq);//拷贝构造函数
//*/
//
//void printDeque(const deque<int>& d)//const只读
//{
//	//const不可以修改，所以在使用迭代器的时候，迭代器必须也要是不可以修改的
//	//所以用const_iterator
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;//容器中的数据数可以进行修改的
//		cout << (*it) << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}