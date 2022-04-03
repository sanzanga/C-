#pragma once
#include <iostream>
using namespace std;
#include "car.h"

class SmallCar :public Car
{
public:
	//���캯��
	SmallCar(string carNum, string carColor, int carShape, Time getTime);
	//��Ϊ��ͣ�����ͳ����뿪ͣ��������ʾ����Ϣ����ͬ����ʼ��ʼ����ֵҲ����ͬ
	//�����ڹ��캯���еĲ����ĸ���������ͬ
	//���Կ��Ը��ݺ��������ض����������캯�����ֱ����ڲ�ͬʱ��
	SmallCar(string carNum, string carColor, int carShape, Time getTime,Time leaveTime);

	//��ȡ��������
	virtual string getCarShape();

	//��ȡ�������� 
	virtual double getMoney();

	//��ȡ������Ϣ
	virtual void showInfo();

	//��ȡͣ�����ڵĳ�����Ϣ
	virtual void showParkInfo();
};