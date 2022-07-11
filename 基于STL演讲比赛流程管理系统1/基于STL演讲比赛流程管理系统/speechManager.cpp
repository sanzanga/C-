#include "speechManager.h"

//���캯��
SpeechManager::SpeechManager()
{
	//��ʼ�����Ժ�����
	this->initSpeech();
	
	//����12��ѡ��
	this->createSpeaker();
}

//�˵�����
void SpeechManager::show_Menu()
{
	cout << "*********************************" << endl;
	cout << "*******  ��ӭ�μ��ݽ�����  ******" << endl;
	cout << "*******  1����ʼ�ݽ�����   ******" << endl;
	cout << "*******  2���鿴�����¼   ******" << endl;
	cout << "*******  3����ձ�����¼   ******" << endl;
	cout << "*******  0���˳���������   ******" << endl;
	cout << "*********************************" << endl;
	cout << endl;
}

//�˳�ϵͳ
void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//��ʼ������������
void SpeechManager::initSpeech()
{
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ������������
	this->m_Index = 1;
}

//����12��ѡ��
void SpeechManager::createSpeaker()
{
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		//�����˾����ѡ��
		Speaker sp;
		sp.setName(name);

		for (int j = 0; j < 2; j++)
		{
			sp.setScore(0, j);
		}

		//����ѡ�ֵı�Ų��ҷ��뵽v1������
		this->v1.push_back(i + 10001);

		//ѡ�ֵı���Լ���Ӧѡ�ַŵ�map������
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}
}

//��ʼ����  �����������̵Ŀ��ƺ���
void SpeechManager::startSpeech()
{
	//��һ�ֿ�ʼ����
	//1����ǩ
	this->speechDraw();

	//2������

	//3����ʾ�������

	//�ڶ��ֿ�ʼ����
	//1����ǩ

	//2������

	//3����ʾ���ս��

	//4������������ļ���
}

//��ǩ
void SpeechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "--------------------------------" << endl;
	cout << "��ǩ���ݽ���˳�����£�" << endl;

	if (this->m_Index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "--------------------------------" << endl;
	system("pause");
	system("cls");
}

//��������
SpeechManager::~SpeechManager()
{

}