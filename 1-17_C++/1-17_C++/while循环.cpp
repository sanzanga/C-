#include <iostream>
using namespace std;

int main1()
{

	//while循环
	//在屏幕上打印0~9这10个数
	/*int num = 0;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;

	num++;
	cout << num << endl;*/

	int num = 0;

	//while()中填入循环条件
	//注意事项：在写循环一定要避免死循环的出现
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}