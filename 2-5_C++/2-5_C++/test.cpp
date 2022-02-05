#include <iostream>
using namespace std;
#include <string>

struct Stu 
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void print(const struct Stu* s)
{
	//s->age = 10;//加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

int main() {

	//const在结构体的中的使用

	//创建一个结构体的变量
	struct Stu s = { "张三",20,100 };

	//通过函数打印结构体的变量信息
	print(&s);

	system("pause");
	return 0;
}

//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
////值传递
//void print1(struct Stu s)
//{
//	cout << "子函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
//}
//
////地址传递
//void print2(struct Stu* s)
//{
//	cout << "main函数中打印 姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
//}
//
//int main() {
//
//	//结构体做函数参数
//	//将学生传入一个参数中，打印学生身上的所有信息
//
//	//创建结构体变量
//	struct Stu s;
//	s.name = "张三";
//	s.age = 20;
//	s.score = 100;
//
//	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
//
//	print1(s);
//
//	//print2(&s);
//
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
//struct Tea
//{
//	int id;
//	string name;
//	int age;
//	struct Stu stu;
//};
//
//int main() {
//
//	//嵌套结构体的使用
//	//创建老师
//	struct Tea t;
//	t.id = 10000;
//	t.name = "老王";
//	t.age = 20;
//	t.stu.name = "小王";
//	t.stu.age = 20;
//	t.stu.score = 100;
//
//	system("pause");
//	return 0;
//}

////结构体指针
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//
//	//创建学生结构体变量
//	struct Stu s = { "张三",20,100 };
//
//	//通过指针指向结构体变量
//	struct Stu * p = &s;
//
//	//通过指针访问结构体变量中的数据
//	//通过结构体指针来访问结构体中的成员用关键字->
//	cout << "姓名：" << p->name << " 年龄：" << p->name << " 分数：" << p->score << endl;
//
//	system("pause");
//	return 0;
//}

////结构体数组
////1、定义一个结构体数组
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
//
//int main() {
//
//	//2、创建一个结构体数组
//	struct Stu stuArray[3] =
//	{
//		{"张三",20,100},
//		{"李四",19,80},
//		{"王五",18,60}
//	};
//
//	//3、给结构体数组中的元素进行赋值
//	stuArray[2].name = "赵六";
//	stuArray[2].age = 20;
//	stuArray[2].score = 100;
//
//	//4、遍历结构体数组
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "姓名：" << stuArray[i].name 
//			 << " 年龄：" << stuArray[i].age 
//			 << " 分数：" << stuArray[i].score 
//			 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////1、创建学生数据类型：学生包括（姓名，年龄、分数）
////自定义数据类型，一些类型集合组成的一个类型
////语法：struct 结构体名 {结构体成员列表};
//struct Student
//{
//	//成员列表
//	string name;
//	int age;
//	int score;
//}s3;//顺便创建一个结构体的变量
//
//
//int main() {
//
//	//2、通过学生类型创建具体学生类型
//
//    //2.1、struct Student s1
//	//struct关键字可以省略
//	struct Student s1;
//	//给s1属性赋值，通过.来访问结构体变量中的属性
//	s1.name = "张三";
//	s1.age = 20;
//	s1.score = 100;
//
//	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;
//
//    //2.2、struct Student s2={...}；
//	struct Student s2 = { "李四",30,60 };
//	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;
//
//    //2.3、定义结构体的时候顺便创建变量
//	s3.name = "王五";
//	s3.age = 25;
//	s3.score = 80;
//
//    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;
//
//	system("pause");
//	return 0;
//}

//void maopao(int arr[], int len)//int arr[]可以写成int* arr;
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//int main() {
//
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, len);
//
//	/*for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}*/
//
//	//打印数组
//	print(arr, len);
//
//	system("pause");
//	return 0;
//}

////实现两个整数进行交换的函数
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01a=" << a << endl;
//	cout << "swap01b=" << b << endl;
//}
//
//void swap02(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main() {
//
//	//指针和函数
//	//1、值传递
//	int a = 10;
//	int b = 20;
//	swap01(a, b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	//2、地址传递
//	//如果是地址传递，可以修饰实参
//	swap02(&a, &b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//指针和数组
//	//利用指针来访问数组中的元素
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	cout << "第一个元素为：" << arr[0] << endl;
//
//	int* p = arr;//arr就是数组的首地址
//
//	cout << "利用指针访问的第一个元素：" << *p << endl;
//
//	p++;//让指针向后偏移了4个字节
//
//	cout << "利用指针访问的第二个元素：" << *p << endl;
//
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++) {
//		//cout << arr[i] << endl;
//		cout << *p2 << endl;
//		p2++;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//1、const修饰指针 常量指针
//	int a = 10;
//	int b = 10;
//
//	const int* p = &a;
//	//指针指向的值不可以进行修改，指针的指向可以进行修改
//	//*p = 20;//err
//	p = &b;//正确
//
//	//2、const修饰常量 指针常量
//	int* const p2 = &a;
//	//指针指向的值可以进行修改，指针的指向不可以进行修改
//	*p2 = 100;//正确
//	//*p2 = &b;//err
//
//	//3、const修饰指针和常量
//	const int* const p3 = &a;
//	//指针的指向的指向的值都不可以进行修改
//	//*p3 = 100;//err
//	//*p3 = &b;//err
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//野指针
//	int* p = (int*)0x1100;
//	//在我们的程序中，尽量避免出现野指针
//
//	//访问野指针宝座
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//空指针
//	//1、空指针用来给指针变量进行初始化
//	int* p = NULL;
//
//
//	//2、空指针是不可以进行访问的
//	//0~255之间的内存编号是系统占用的，因此不可以进行访问
//	*p = 100;//没有语法错误，但是程序会崩溃
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//指针所占的内存空间大小
//	int a = 10;
//	int* p = &a;
//	//在32位操作系统下，指针占用4个字节，不管是什么类型
//	//在64位操作系统下，指针占用8，不管是什么类型
//	cout << "sizeof(int*)=" << sizeof(p) << endl;
//	cout << "sizeof(int*)=" << sizeof(int *) << endl;
//	cout << "sizeof(int*)=" << sizeof(float*) << endl;
//	cout << "sizeof(int*)=" << sizeof(double*) << endl;
//	cout << "sizeof(int*)=" << sizeof(char*) << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//1、定义一个指针
//	int a = 10;
//	//指针定义的语法：数据类型 * 指针变量名；
//	int* p;
//	//让指针记录变量的a的地址
//	p = &a;
//	cout << "a的地址为：" << &a << endl;
//	cout << "指针p为:" << p << endl;
//
//	//2、使用指针
//	//可以通过解引用的方式来找到指针指向的内存
//	//指针前面加上一个*代表找到指针指向的内存中的数据
//	*p = 100;
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//
//	system("pause");
//	return 0;
//}