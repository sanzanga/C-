#include <iostream>
using namespace std;

int main() {

	//Switch���
	//��һ����Ӱ���д��
	//10~9 ����
	//8~7  �ǳ���
	//6~5  һ��
	//5һ��  ��Ƭ

	//1����ʾ�û�����Ӱ���
	cout << "�����Ӱ���д��" << endl;
	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3�������û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ�ķ�֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default :
		cout << "����Ϊ������Ƭ" << endl;
		break;
	}

	//if��Switch����
	//switchȱ�㣺�ж�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	//switch�ŵ㣺�ṹ������ִ��Ч�ʸ�

	system("pause");
	return 0;
}