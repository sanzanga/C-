#pragma once
#include <iostream>
using namespace std;
#include <string>

//ѡ����
class Speaker
{
public:
	//��������
	void setName(string name);

	//��ȡ����
	string getName();

	//���÷���
	void setScore(double score, int num);

	//��ȡ����
	double getScore(int num);

private:
	string m_Name;//����
	double m_Score[2];//���� ��������ֵ÷�
};