#include <iostream>
using namespace std;

int main4() {

	//1����ʾ�û�����߿�����
	int score = 0;
	cout << "������߿�������" << endl;
	cin >> score;

	//2����ʾ�߿�����
	cout << "������ķ���Ϊ��" << score << endl;

	//3���ж�
	//�������600 һ��
	//   ����700 �廪
	//   ����650 ����
	//   ����600 �˴�
	//�������500 ����
	//�������400 ����
	//������� δ���ϱ���
	if (score > 600)
	{
		cout << "��ϲ����������һ����ѧ" << endl;
		if (score > 700)
		{
			cout << "�廪" << endl;
		}
		else if (score > 650)
		{
			cout << "����" << endl;
		}
		else
		{
			cout << "�˴�" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "��ϲ���������˶�����ѧ" << endl;
	}
	else if (score > 400)
	{
		cout << "��ϲ����������������ѧ" << endl;
	}
	else
	{
		cout << "δ���ϱ��ƴ�ѧ" << endl;
	}

	system("pause");
	return 0;
}