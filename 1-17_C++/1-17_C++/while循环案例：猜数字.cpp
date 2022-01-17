#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>

int main2() {

	//添加随机数种子 作用利用当前系统时间生成随机数
	//防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生产随机数
	int num = rand() % 100 + 1;//rand()%100生成0~99的随机数 给两个后面加上2就能生成1~100的随机数
	//cout << num << endl;

	/*num = rand() % 100 + 1;
	cout << num << endl;*/
	//2、玩家进行猜测
	int val = 0;//玩家输入的数据

	while (1)
	{
		cin >> val;
		//3、判断玩家的猜测
	    //猜错  提示猜的结果 过大或过小 重新返回第二步
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜你，猜对了" << endl;
			//猜对  退出游戏
			break;//可以利用break关键字来退出当前的循环
		}
	}

	//cin >> val;
	system("pause");
	return 0;
}