#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//二进制 读文件
class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;

	//3、打开文件 判断问价是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4、读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;

	//5、关闭文件
	ifs.close();
}

int main() {

	test01();

	system("pause");
	return 0;
}

////二进制文件 写文件
//class Person
//{
//public:
//	char m_Name[64];//姓名
//	int m_Age;//年龄
//};
//
//void test01()
//{
//	//1、包含头文件
//	//#include <fstream>
//
//	//2、创建流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4、写文件
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5、关闭文件
//	ofs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////文本文件 读文件
//void test01()
//{
//	//1、包含头文件
//	//#include <fstream>
//
//	//2、创建流对象
//	ifstream ifs;
//
//	//3、打开文件  并且判断是否打开成功
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4、读数据
//	//第一种
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第三种
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	//5、关闭文件
//	ifs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////文本文件——写文件
//void test01()
//{
//	//1、包含头文件
//	//#include <fsteam>
//	
//	//2、创建流对象
//	ofstream ofs;
//
//	//3、指定打开方式
//	ofs.open("text.txt", ios::out);
//
//	//4、写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	//5、关闭文件
//	ofs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//class rectangle
//{
//private:
//	int length, width;
//public:
//	rectangle(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	void set(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	int getlength()
//	{
//		return length;
//	}
//	int getwidth() 
//	{
//		return width;
//	}
//	// write your code here...
//	virtual int getval()
//	{
//		return width * length;
//	}
//};
//class cuboid :public rectangle
//{
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y)
//	{
//		height = z;
//	}
//	// write your code here...
//	int getval()
//	{
//		return getwidth() * getlength() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}

//class BaseCalculator
//{
//public:
//    int m_A;
//    int m_B;
//    // write your code here......
//    virtual int getResult() = 0;
//};
//
//// 加法计算器类
//class AddCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A + m_B;
//    }
//};
//
//// 减法计算器类
//class SubCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A - m_B;
//    }
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}