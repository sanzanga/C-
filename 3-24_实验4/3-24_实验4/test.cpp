#include <iostream>
#include <string>
using namespace std;
#include "client.h"

class Girl;
//�к���
class Boy
{
	friend void visitBoyAndGirl(Boy& boy, Girl& girl);
public:
	Boy()
	{
		name = "����";
		age = 18;
	}

private:
	string name;//����
	int age;//����
};

//Ů����
class Girl
{
	friend void visitBoyAndGirl(Boy& boy, Girl& girl);
public:
	Girl()
	{
		name = "��÷÷";
		age = 17;
	}

private:
	string name;//����
	int age;//����
};

void visitBoyAndGirl(Boy& boy, Girl& girl)
{
	cout << "ͨ�����㺯��������Boy���Girl���е�˽�г�Ա" << endl;
	cout << "Boy����Ϣ��" << endl;
	cout << "������" << boy.name << " ����Ϊ��" << boy.age << endl;
	cout << "Girl����Ϣ��" << endl;
	cout << "������" << girl.name << " ����Ϊ��" << girl.age << endl;
}

int main() {

	Boy boy;
	Girl girl;

	visitBoyAndGirl(boy, girl);

	system("pause");
	return 0;
}

////�к���
//class Boy
//{
//	friend class Girl;
//public:
//	Boy()
//	{
//		name = "����";
//		age = 18;
//	}
//	//void visitgirl(Girl& girl);
//
//private:
//	string name;//����
//	int age;//����
//};
//
////Ů����
//class Girl
//{
//public:
//	Girl()
//	{
//		name = "��÷÷";
//		age = 17;
//	}
//	//����Boy�еĳ�Ա
//	void visitboy(Boy& boy);
//
//private:
//	string name;//����
//	int age;//����
//};
//
//void Girl::visitboy(Boy& boy)
//{
//	cout << "ͨ��Girl�ĳ�Ա��������Boy�е���Ϣ" << endl;
//	cout << "����Ϊ��" << boy.name << " ����Ϊ��" << boy.age << endl;
//}
//
////void Boy::visitgirl(Girl& girl)
////{
////	cout << "ͨ��Boy�ĳ�Ա��������Girl�е���Ϣ" << endl;
////	cout << "����Ϊ��" << girl.name << " ����Ϊ��" << girl.age << endl;
////}
//
//int main() {
//
//	Boy boy;
//	Girl girl;
//	girl.visitboy(boy);
//	//boy.visitgirl(girl);
//
//	system("pause");
//	return 0;
//}

//void PrintServerNameAndClientNum();
//void main()
//{
//	Client C1;
//	Client C2;
//	cout << "����������Ϊ: " << C1.GetServerName() << endl;
//	cout << "�ͻ�������Ϊ: " << C1.GetClientNum() << endl;
//	C1.ChangeServerName('A');
//	cout << "��������Ϊ: " << C1.GetServerName() << endl;
//	PrintServerNameAndClientNum();
//}

//void fn1(); //����ԭ������
//int x = 1, y = 2;
//int main()
//{
//	cout << "Begin..." << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "Evaluate x and y in main()..." << endl;
//	int x = 10, y = 20;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	cout << "Step into fn1()..." << endl;
//	fn1(); //��������
//	cout << "Back in main" << endl;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//	return 0;
//}
//void fn1()
//{
//	int y = 200;
//	cout << "x = " << x << endl;
//	cout << "y = " << y << endl;
//}
