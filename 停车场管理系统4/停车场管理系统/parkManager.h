#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include "car.h"
#include "time.h"
#include "bigTruck.h"
#include "mediumTruck.h"
#include "smallCar.h"
#include "smallTruck.h"
#include "access.h"

#define MAX 3
#define FILENAME1 "carInfo.txt"
#define FILENAME2 "carInfo2.txt"
#include <fstream>

class parkManager
{
public:
	//���캯��
	parkManager();

	//չʾ�˵�
	void shouMenu();

	//�˳�ϵͳ
	void ExistSystem();

	//չʾ�շѱ�׼
	void showRates();

	//���ӳ�����Ϣ
	void addCarInfo();

	//��¼ͣ�������ڵĳ�������
	int m_CarNum;

	//���泵����Ϣ������
	Car** carInfoArray;

	//���泵����Ϣ
	void save();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//��ȡ�ļ��е���������
	int getCarInfoNum();

	//��ʼ��ָ������
	void init_Car();

	//��ʾ������Ϣ
	void showCarInfo();

	//����ͨ���ϵĳ�����Ϣ������
	Access** carInAccessInfo;

	//��¼ͨ���ϵĳ�������
	int carNumInAccess;

	//���ͨ���ϳ�������
	int getCarInAccessNum();

	//����ͨ���ϵĳ�����Ϣ
	void save1();

	//��ʼ��ͨ������
	void initAccess();

	//�����뿪ͣ����
	void carLeave();

	//�жϲ��ҵĳ��ƺ��Ƿ����
	int carNumIsExist(string carNum);

	//ɾ��������Ϣ
	void DelCar();

	//�ú��������������뿪��ʱ��ɾ����Ϣ
	void DelCar(string carNum);

	//ͨ���ϵĳ�������ͣ����
	void accessToPark();

	//�޸ĳ�����Ϣ
	void ModCarInfo();

	//��ѯ����
	void searchInfo();

	//��������
	~parkManager();
};