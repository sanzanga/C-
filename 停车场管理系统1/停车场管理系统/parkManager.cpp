#include "parkManager.h"

parkManager::parkManager()
{

}

//չʾ�˵�
void parkManager::shouMenu()
{
	cout << "************************************" << endl;
	cout << "****** ��ӭʹ��ͣ��������ϵͳ��******" << endl;
	cout << "********* 0.�˳�������� ***********" << endl;
	cout << "********* 1.���ӳ�����Ϣ ***********" << endl;
	cout << "********* 2.��ʾ������Ϣ ***********" << endl;
	cout << "********* 3.�����뿪ͣ���� *********" << endl;
	cout << "********* 4.ɾ��������¼ ***********" << endl;
	cout << "********* 5.�޸ĳ�����Ϣ ***********" << endl;
	cout << "********* 6.��ѯ������Ϣ ***********" << endl;
	cout << "********* 7.ͳ�Ƴ�����Ϣ ***********" << endl;
	cout << "************************************" << endl;
}

//�˳�ϵͳ
void parkManager::ExistSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}

parkManager::~parkManager()
{

}