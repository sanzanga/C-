#include <iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>

int main2() {

	//������������ �������õ�ǰϵͳʱ�����������
	//��ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1��ϵͳ���������
	int num = rand() % 100 + 1;//rand()%100����0~99������� �������������2��������1~100�������
	//cout << num << endl;

	/*num = rand() % 100 + 1;
	cout << num << endl;*/
	//2����ҽ��в²�
	int val = 0;//������������

	while (1)
	{
		cin >> val;
		//3���ж���ҵĲ²�
	    //�´�  ��ʾ�µĽ�� ������С ���·��صڶ���
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ�㣬�¶���" << endl;
			//�¶�  �˳���Ϸ
			break;//��������break�ؼ������˳���ǰ��ѭ��
		}
	}

	//cin >> val;
	system("pause");
	return 0;
}