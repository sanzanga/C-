#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "time.h"

//���ĸ���
class Car
{
	friend class SmallCar;
public:

	//��ȡ��������
	virtual string getCarShape() = 0;

	//��ȡ�������� 
	virtual double getMoney() = 0;

	//��ȡ������Ϣ
	virtual void showInfo() = 0;

	//��ȡͣ�����ڵĳ�����Ϣ
	virtual void showParkInfo() = 0;

private:

	string carNum;//���ƺ�
	string carColor;//��ɫ
	int carShape;//�������ͱ��
	Time getTime;//��������ʱ��
	Time leaveTime;//�����뿪ʱ��
	int money;//������ͣ�����ķ���
};