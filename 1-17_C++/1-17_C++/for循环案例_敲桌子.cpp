#include <iostream>
using namespace std;

int main6() {

	//敲桌子：从1开始数到100，如果数字个位含7，或者数组十位含7
	//或者是7的倍数，我们敲桌子，其他数字直接打印出
	/*for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || (i >= 70 && i <= 79))
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/

	//1、先输出1~100的数字
	for (int i = 1; i <= 100; i++)
	{
		//2、从100个数字里面找到特殊的数字，打印“敲桌子”
		//如果是7的倍数 个位或者十位含7 敲桌子
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)//如果是特殊数字，打印敲桌子
		{
			cout << "敲桌子" << endl;
		}
		else//如果不是特殊数字，才打印数字
		{
			cout << i << endl;
		}
	}


	system("pause");
	return 0;
}