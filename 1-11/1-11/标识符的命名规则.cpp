#include <iostream>
using namespace std;

//标识符命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线
//3、标识符第一个字符只能是字符和下划线
//4、标识符是区分大小写的

int main()
{
	//1、标识符不可以是关键字
	//int int =10;
	//2、标识符是由字母、数字、下划线
	int abc = 10;
	int _abc = 20;
	int _123abc_ = 30;

	//3、标识符第一个字符只能是字符和下划线
	//int 123abc=40;

	//4、标识符是区分大小写的
	int aa = 100;
	cout << aa << endl;
	//cout << AA << endl;//AA和aa不是同一个名称

	//建议：给变量取名字的时候，最好能够做到见到名字知意
	int num1 = 10;
	int num2 = 10;
	int sum = num1 + num2;
	cout << sum << endl;
	system("pause");
	return 0;
}