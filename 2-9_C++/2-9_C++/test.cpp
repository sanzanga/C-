#include <iostream>
using namespace std;

//new的基本语法
int* func()
{
	//在堆区创建整形数据
	//new返回的是该数据类型的指针
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区的数据 由程序员管理开辟和释放
	//如果想要释放堆区的数据，利用关键字 delete
	delete p;

	//cout << *p << endl;//这样就会报错
	//内存已经被释放，再次访问就是非法的
}

//在堆区利用new开辟数组
void test02()
{
	//创建十个整形数据的数组，在堆区
	int* arr = new int[10];//10代表数组里面有10个元素

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;//给10个元素进行赋值
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	//释放堆区数组
	delete[] arr;
	//释放的数组的时候要交加上一个[]
}

int main() {

	//new的基本语法
	//test01();
	test02();
	system("pause");
	return 0;
}

//int* func()
//{
//	//利用new关键字 可以将数据开辟到堆区
//	//指针 本质上也是局部变量  放在栈区 指针保存的数据是放在堆区的
//	int * p = new int(10);
//	return p;
//}
//
//int main() {
//
//	//在堆区开辟数据
//	int* p = func();
//
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}

////栈区的注意事项 -  不要返回局部变量的地址
////栈区的数据有编译器管理开辟和释放
//
//int* func(int b)
//{
//	b = 100;//形参也会放在栈区里面
//	int a = 10;//局部变量  存放在栈区，栈区的数据在函数执行完之后自动释放  当下面调用的时候 该地址里的内容已经不再是我们需要的内容
//	return &a;//返回局部变量的地址
//}
//
//int main() {
//
//	int* p = func();
//
//	cout << *p << endl;//第一次可以打印正确的数字，是因为编译器做了保留
//	cout << *p << endl;//第二次这个数据就不再保留了
//
//	system("pause");
//	return 0;
//}


////全局变量
//int g = 10;//在函数体外面
//int k = 10;
//
////全局常量
//const int c_g_a = 10;
//const int c_g_b = 10;
//
//int main() {
//
//	//全局区
//	//全局变量、静态变量、常量
//	//创建如同局部变量
//	int a = 10;
//	int b = 10;
//
//	cout << "局部变量a的地址为： " << (int)&a << endl;
//	cout << "局部变量b的地址为： " << (int)&b << endl;
//
//	cout << "全局变量g的地址为： " << (int)&g << endl;
//	cout << "全局变量k的地址为： " << (int)&k << endl;
//
//	//静态变量
//	static int s_a = 10;
//	static int s_b = 10;
//
//	cout << "静态变量s_a的地址为： " << (int)&s_a << endl;
//	cout << "静态变量s_b的地址为： " << (int)&s_b << endl;
//
//	//常量
//	//字符常量
//	//由双引号引起来的都是字符串常量
//	//例如："hello world"
//	cout << "字符串常量的地址为： " << (int)&"hello world" << endl;
//
//	//const修饰的变量
//	//const修饰的全局变量，const修饰的局部变量
//
//	cout << "全局常量c_g_a的地址为： " << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b的地址为： " << (int)&c_g_b << endl;
//
//	int c_l_a = 10;
//	int c_l_b = 10;
//	cout << "局部常量c_l_a的地址为： " << (int)&c_l_a << endl;
//	cout << "局部常量c_l_b的地址为： " << (int)&c_l_b << endl;
//
//	system("pause");
//	return 0;
//}