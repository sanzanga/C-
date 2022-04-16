#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "time.h"

//���ĸ���
class Car
{
	friend class SmallCar;
	friend class SmallTruck;
	friend class MediumTruck;
	friend class BigTruck;
	friend class parkManager;
public:

	//��ȡ��������
	virtual string getCarShape() = 0;

	//��ȡ�������� 
	virtual double getMoney() = 0;

	//��ȡ������Ϣ
	virtual void showInfo() = 0;

	//��ȡͣ�����ڵĳ�����Ϣ
	virtual void showParkInfo() = 0;

	//��ȡ���ʱ��
	int getHours();

private:

	string carNum;//���ƺ�
	string carColor;//��ɫ
	int carShape;//�������ͱ��
	Time getTime;//��������ʱ��
	Time leaveTime;//�����뿪ʱ��
	int money;//������ͣ�����ķ���
};