#include <iostream>
using namespace std;

int main() {

	for (int i = 2; i <= 10000; i++){
		int sum = 0;
		for (int j = 1; j < i; j++){
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum==i){
			cout << i << " ";
		}
	}

	system("pause");
	return 0;
}

//找出2~10000之内的所有完全数。所谓完全数，即其各因子之和正好等于本身的数。如
//6 = 1 + 2 + 3，28 = 1 + 2 + 4 + 7 + 14，所以6，28都是完全数

//int main() {
//
//	char ch;
//	//打印菜单提示
//	cout << "Menu: A(dd) D(elete) S(ort) Q(uit)， Select one :" << endl;
//
//	do
//	{
//		cin >> ch;
//		switch (ch)
//		{
//		case 'A':
//			cout << "数据已经添加成功" << endl;
//			break;
//		case 'D':
//			cout << "数据已经删除成功" << endl;
//			break;
//		case 'S':
//			cout << "数据已经排序成功" << endl;
//			break;
//		case 'Q':
//			break;
//		default:
//			break;
//		}
//	} while (ch != 'Q');
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	char ch;
//	//打印菜单提示
//	cout << "Menu: A(dd) D(elete) S(ort) Q(uit)， Select one :" << endl;
//
//	do
//	{
//		cin >> ch;
//		if (ch == 'A')
//			cout << "数据已经添加成功" << endl;
//		else if (ch == 'D')
//			cout << "数据已经删除成功" << endl;
//		else if (ch == 'S')
//			cout << "数据已经排序成功" << endl;
//		else
//			break;
//	} while (ch != 'Q');
//
//	system("pause");
//	return 0;
//}

//功能需求：运行时显示"Menu: A(dd) D(elete) S(ort) Q(uit)， Select one:"提示
//用户输入，A 表示增加，D 表示删除，S 表示排序，Q 表示退出，输入为 A、 D、S 时分别提示" 数据已经增加、删除、排序。"输入为 Q

//int main()
//{
//	int myage = 20, yourage = 30;
//	cout << "I am" << myage;
//	cout << "You are " << yourage;
//	myage++;
//	++yourage;
//	cout << "One year passes\n";
//	cout << "I am" << myage;
//	cout << "You are " << yourage;
//	cout << "Another year passes\n";
//	cout << "I am" << myage++;
//	cout << "You are " << ++yourage;
//	cout << "I am" << myage;
//	cout << "You are " << yourage;
//	return 0;
//}


//int main()
//{
//	cout << "char length:" << sizeof(char) << endl;
//	cout << "int length:" << sizeof(int) << endl;
//	cout << "long length:" << sizeof(long) << endl;
//	cout << "float length:" << sizeof(float) << endl;
//	cout << "double length:" << sizeof(double) << endl;
//	cout << "long double length:" << sizeof(long double) << endl;
//	cout << "char* length:" << sizeof(char*) << endl;
//	cout << "int* length:" << sizeof(int*) << endl;
//	cout << "long* length:" << sizeof(long*) << endl;
//	cout << "float* length:" << sizeof(float*) << endl;
//	cout << "double* length:" << sizeof(double*) << endl;
//	cout << "long double* length:" << sizeof(long double*) << endl;
//	cout << "void* length:" << sizeof(void*) << endl;
//	return 0;
//}

//int main() {
//
//	int a = 1, b = 2, c = 3;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "hello world" << endl;
//
//	system("pause");
//	return 0;
//}