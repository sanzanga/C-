#include <iostream>
using namespace std;

int main4() {

	//水仙花数
	//水仙花数就是指一个三位数，它的每一位上的数字的3次方幂之和等于它本身
	//例如:1^3+5^3+3^3=153

	//int num = 100;
	//do
	//{
	//	int flag = num;//123
	//	int num1 = flag % 10;//3
	//	flag /= 10;//12
	//	int num2 = flag % 10;//2
	//	flag /= 10;//1
	//	int num3 = flag % 10;//1
	//	if ((num1*num1*num1 + num2*num2*num2 + num3*num3*num3) == num)
	//		cout << num << endl;
	//	num++;
	//} while (num < 1000);

	//1、打印所有三位数字
	int num = 100;

	do
	{
		//2、从所有的三位数字中找到水仙花数
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;//获取数字的个位
		b = num / 10 % 10;//获取数字的十位
		c = num / 100 % 10;//获取数字的百位

		if (a * a * a + b * b * b + c * c * c == num)//如果是水仙花数，才打印
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}