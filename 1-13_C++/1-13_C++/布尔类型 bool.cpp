#include <iostream>
using namespace std;

int main7() {

	//创建bool数据类型
	bool flag = true;//true代表的是真的意思
	cout << flag << endl;

	flag = false;//false代表的是假的意思
	cout << false << endl;

	//本质上 1代表真 0代表假

	//查看bool类型所占内存空间

	cout << "bool类型所占内存空间：" << sizeof(bool) << endl;

	system("pause");
	return 0;
}
