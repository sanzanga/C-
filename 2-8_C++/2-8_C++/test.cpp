#include <iostream>
using namespace std;

#include <string>

//Ӣ�۽ṹ��
struct Hero
{
	//����
	string name;
	//����
	int age;
	//�Ա�
	string sex;
};

//ð������ ʵ��������������
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

//��ӡ����������е���Ϣ
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << heroArray[i].name << 
			    "���䣺 " << heroArray[i].age << 
			    "�Ա� " << heroArray[i].sex << endl;
	}
}

int main() {

	//����������5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	/*for (int i = 0; i < len; i++)
	{
		cout << "������ " << heroArray[i].name << "���䣺 " << heroArray[i].age << "�Ա� " << heroArray[i].sex << endl;
	}*/

	//������������򣬰������������������
	bubble_sort(heroArray, len);

	//�������Ľṹ�塣���
	printHero(heroArray, len);

	system("pause");
	return 0;
}

//#include <string>
//#include <ctime>
//
////ѧ���Ľṹ��Ķ���
//struct Student
//{
//	//����
//	string name;
//	//����
//	int score;
//};
//
////��ʦ�Ľṹ�嶨��
//struct Teacher
//{
//	//����
//	string tName;
//	//ѧ������
//	struct Student sArray[5];
//};
//
////����ʦ��ѧ����ֵ����
//void allocateSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed[i];
//		//ͨ��һ��ѭ����ÿһ����ʦ������ѧ�����и�ֵ
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
////��ӡ������Ϣ�ĺ���
//void printInfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ�������� " << tArray[i].tName << endl;
//
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ�������� " << tArray[i].sArray[j].name <<
//				    "���Է����� " << tArray[i].sArray[j].score << endl;
//		}
//	}
//}
//
//int main() {
//
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//����������ʦ������
//	struct Teacher tArray[3];
//
//	//ͨ��������������ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	allocateSpace(tArray, len);
//
//	//��ӡ������ʦ������ѧ����Ϣ
//	printInfo(tArray,len);
//
//	system("pause");
//	return 0;
//}