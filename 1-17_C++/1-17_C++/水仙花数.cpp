#include <iostream>
using namespace std;

int main4() {

	//ˮ�ɻ���
	//ˮ�ɻ�������ָһ����λ��������ÿһλ�ϵ����ֵ�3�η���֮�͵���������
	//����:1^3+5^3+3^3=153

	//int num = 100;
	//do
	//{
	//	int flag = num;//123
	//	int num1 = flag % 10;//3
	//	flag /= 10;//12
	//	int num2 = flag % 10;//2
	//	flag /= 10;//1
	//	int num3 = flag % 10;//1
	//	if ((num1*num1*num1 + num2*num2*num2 + num3*num3*num3) == num)
	//		cout << num << endl;
	//	num++;
	//} while (num < 1000);

	//1����ӡ������λ����
	int num = 100;

	do
	{
		//2�������е���λ�������ҵ�ˮ�ɻ���
		int a = 0;//��λ
		int b = 0;//ʮλ
		int c = 0;//��λ

		a = num % 10;//��ȡ���ֵĸ�λ
		b = num / 10 % 10;//��ȡ���ֵ�ʮλ
		c = num / 100 % 10;//��ȡ���ֵİ�λ

		if (a * a * a + b * b * b + c * c * c == num)//�����ˮ�ɻ������Ŵ�ӡ
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}