#include <iostream>
using namespace std;

int main7() {

	//利用嵌套循环实现星图

	//打印一行星图

	//外层循环
	//外层循环一次，内层循环一周
	for (int i = 0; i < 10 ; i++)
	{
		//内层循环
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;//换行
	}

	system("pause");
	return 0;
}