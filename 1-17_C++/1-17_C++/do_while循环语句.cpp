#include <iostream>
using namespace std;

int main3() {

	//do...while���
	//����Ļ�����0~9��10������

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} 
	while (num);

	//do...whileѭ����whileѭ������������do...while����ִ��һ��ѭ�����

	while (num)
	{
		cout << num << endl;
		num++;
	}

	system("pause");
	return 0;
}