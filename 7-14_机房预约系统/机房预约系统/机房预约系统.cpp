#include <iostream>
using namespace std;

int main()
{
	int select = 0;//���ڽ����û���ѡ��

	while (true)
	{
		cout << "=============== ��ӭ�������ԤԼϵͳ ===============" << endl;
		cout << endl << "���������ĵ����" << endl;
		cout << "\t\t------------------------\n";
		cout << "\t\t|      1.ѧ������      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      2.��   ʦ       |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      3.�� �� Ա      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t|      0.�˳�ϵͳ      |\n";
		cout << "\t\t|                      |\n";
		cout << "\t\t------------------------\n";
		cout << "��������ѡ��";

		cin >> select;//�����û���ѡ��

		switch (select)//�����û���ѡ�� ʵ�ֲ�ͬ�Ľӿ�
		{
		case 1://ѧ�����
			break;
		case 2://��ʦ�����
			break;
		case 3://����Ա���
			break;
		case 0://�˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}