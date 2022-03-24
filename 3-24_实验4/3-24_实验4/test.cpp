#include <iostream>
#include <string>
using namespace std;
#include "client.h"

class Girl;
//男孩类
class Boy
{
	friend void visitBoyAndGirl(Boy& boy, Girl& girl);
public:
	Boy()
	{
		name = "李雷";
		age = 18;
	}

private:
	string name;//姓名
	int age;//年龄
};

//女孩类
class Girl
{
	friend void visitBoyAndGirl(Boy& boy, Girl& girl);
public:
	Girl()
	{
		name = "韩梅梅";
		age = 17;
	}

private:
	string name;//姓名
	int age;//年龄
};

void visitBoyAndGirl(Boy& boy, Girl& girl)
{
	cout << "通过顶层函数来访问Boy类和Girl类中的私有成员" << endl;
	cout << "Boy类信息：" << endl;
	cout << "姓名：" << boy.name << " 年龄为：" << boy.age << endl;
	cout << "Girl类信息：" << endl;
	cout << "姓名：" << girl.name << " 年龄为：" << girl.age << endl;
}

int main() {

	Boy boy;
	Girl girl;

	visitBoyAndGirl(boy, girl);

	system("pause");
	return 0;
}

////男孩类
//class Boy
//{
//	friend class Girl;
//public:
//	Boy()
//	{
//		name = "李雷";
//		age = 18;
//	}
//	//void visitgirl(Girl& girl);
//
//private:
//	string name;//姓名
//	int age;//年龄
//};
//
////女孩类
//class Girl
//{
//public:
//	Girl()
//	{
//		name = "韩梅梅";
//		age = 17;
//	}
//	//访问Boy中的成员
//	void visitboy(Boy& boy);
//
//private:
//	string name;//姓名
//	int age;//年龄
//};
//
//void Girl::visitboy(Boy& boy)
//{
//	cout << "通过Girl的成员函数访问Boy中的信息" << endl;
//	cout << "姓名为：" << boy.name << " 年龄为：" << boy.age << endl;
//}
//
////void Boy::visitgirl(Girl& girl)
////{
////	cout << "通过Boy的成员函数访问Girl中的信息" << endl;
////	cout << "姓名为：" << girl.name << " 年龄为：" << girl.age << endl;
////}
//
//int main() {
//
//	Boy boy;
//	Girl girl;
//	girl.visitboy(boy);
//	//boy.visitgirl(girl);
//
//	system("pause");
//	return 0;
//}

//void PrintServerNameAndClientNum();
//void main()
//{
//	Client C1;
//	Client C2;
//	cout << "服务器名称为: " << C1.GetServerName() << endl;
//	cout << "客户机数量为: " << C1.GetClientNum() << endl;
//	C1.ChangeServerName('A');
//	cout << "服务器名为: " << C1.GetServerName() << endl;
//	PrintServerNameAndClientNum();
//}

//void fn1(); //函数原型声明
//int x = 1, y = 2;
//int main()
//{
//	cout << "Begin..." << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "Evaluate x and y in main()..." << endl;
//	int x = 10, y = 20;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "Step into fn1()..." << endl;
//	fn1(); //函数调用
//	cout << "Back in main" << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	return 0;
//}
//void fn1()
//{
//	int y = 200;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//}
