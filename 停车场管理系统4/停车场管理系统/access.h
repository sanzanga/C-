#pragma once
#include <iostream>
using namespace std;
#include <string>

//ͨ����
class Access
{
	friend class parkManager;

public:
	//���캯��
	Access(string carNum, string carColor, int carShapeNum);

private:
	string carNum;//���ƺ�
	string carColor;//������ɫ
	int carShapeNum;//����
};