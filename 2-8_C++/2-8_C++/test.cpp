#include <iostream>
using namespace std;

#include <string>

//英雄结构体
struct Hero
{
	//姓名
	string name;
	//年龄
	int age;
	//性别
	string sex;
};

//冒泡排序 实现年龄升序排列
void bubble_sort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

//打印排序后数组中的信息
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << heroArray[i].name << 
			    "年龄： " << heroArray[i].age << 
			    "性别： " << heroArray[i].sex << endl;
	}
}

int main() {

	//创建数组存放5名英雄
	struct Hero heroArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "姓名： " << heroArray[i].name << "年龄： " << heroArray[i].age << "性别： " << heroArray[i].sex << endl;
	}*/

	//对数组进行排序，按照年龄进行升序排列
	bubble_sort(heroArray, len);

	//将排序后的结构体。输出
	printHero(heroArray, len);

	system("pause");
	return 0;
}

//#include <string>
//#include <ctime>
//
////学生的结构体的定义
//struct Student
//{
//	//姓名
//	string name;
//	//分数
//	int score;
//};
//
////老师的结构体定义
//struct Teacher
//{
//	//姓名
//	string tName;
//	//学生数组
//	struct Student sArray[5];
//};
//
////给老师和学生赋值函数
//void allocateSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	//给老师赋值
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//		//通过一个循环给每一名老师所带的学生进行赋值
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].name = "Student_";
//			tArray[i].sArray[j].name += nameSeed[j];
//
//			int random = rand() % 61 + 40;
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//
////打印所有信息的函数
//void printInfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "老师的姓名： " << tArray[i].tName << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t学生姓名： " << tArray[i].sArray[j].name <<
//				    "考试分数： " << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main() {
//
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//创建三名老师的数组
//	struct Teacher tArray[3];
//
//	//通过函数给三名老师的信息赋值，并给老师带的学生信息赋值
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//
//	//打印所有老师及所带学生信息
//	printInfo(tArray,len);
//
//	system("pause");
//	return 0;
//}