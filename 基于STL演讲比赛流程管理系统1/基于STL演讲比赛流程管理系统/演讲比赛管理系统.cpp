#include <iostream>
using namespace std;
#include "speechManager.h"

int main() {

	//创建管理类对象
	SpeechManager sm;

	////测试12名选手创建
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手编号：" << it->first << "  姓名：" << it->second.getName() << "  分数：" << it->second.getScore(0) << endl;
	//}

	int choice = 0;//用于存储用户的输入

	while (true)
	{
		sm.show_Menu();

		cout << "请输入您的选择：";
		cin >> choice;

		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届记录
			break;
		case 3://清空比赛记录
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");//清屏
			break;
		}
	}

	system("pause");
	return 0;
}