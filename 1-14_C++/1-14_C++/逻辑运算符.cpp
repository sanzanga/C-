#include <iostream>
using namespace std;

int main() {

	//逻辑运算符 非 ！
	int a = 10;

	//在C++中 除了0都是真
	cout << !a << endl;

	cout << !!a << endl;

	//逻辑与 &&
	//两个条件都为真，结果才为真
	//同真为真 其余为假

	a = 10;
	int b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 10;
	cout << (a && b) << endl;

	a = 0;
	b = 0;
	cout << (a && b) << endl;

	//逻辑或 ||
	//同假为假 其余为真
	a = 10;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 10;
	cout << (a || b) << endl;

	a = 0;
	b = 0;
	cout << (a || b) << endl;


	system("pause");
	return 0;
}