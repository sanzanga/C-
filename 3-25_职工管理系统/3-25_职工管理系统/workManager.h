#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include "work.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

#include <fstream>
#define FILENAME "empFile.txt"

class WorkManager
{
public:
	//���캯��
	WorkManager();

	//չʾ�˵�
	void Show_Menu();

	//�˳�ϵͳ
	void ExistSystem();

	//��¼ְ������
	int m_EmpNum;

	//ְ�������ָ��
	Work** m_EmpArray;

	//���ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;

	//ͳ���ļ��е�����
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��������
	~WorkManager();
};