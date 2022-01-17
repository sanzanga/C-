#include <iostream>
using namespace std;

int main3() {

	//do...while语句
	//在屏幕中输出0~9这10个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} 
	while (num);

	//do...while循环和while循环的区别在于do...while会先执行一次循环语句

	while (num)
	{
		cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}