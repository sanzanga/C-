#include <iostream>
using namespace std;

#include <string>
#include "swap.h"

//int main() {
//
//	//��������;
//	//1������ͨ��������ͳ����������ռ���ڴ�Ĵ�С
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
//	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
//	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
//
//	//2������ͨ���������鿴�����׵�ַ
//	cout << "������׵�ַΪ��" << (int)arr << endl;
//	cout << "�����е�һ��Ԫ�صĵ�ַΪ��" << (int)&arr[0] << endl;
//	cout << "�����еڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[1] << endl;
//
//	//�������ǳ����������Խ��и�ֵ����
//	//arr=100;//err.
//
//	system("pause");
//
//	return 0;
//}

//int main() {
//
//	//�ж�һ��������������ֵ
//	int arr[5] = { 300,350,200,400,250 };
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout << "���ֵΪ��" << max << endl;
//
//
//	system("pause");
//
//	return 0;
//}

//int main() {
//
//	////����Ԫ�ص�����
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int left = 0;
//	//int right = sz - 1;
//	//while (left < right)
//	//{
//	//	int temp = arr[left];
//	//	arr[left] = arr[right];
//	//	arr[right] = temp;
//	//	left++;
//	//	right--;
//	//}
//	//for (int i = 0; i < sz; i++)
//	//{
//	//	cout << arr[i];
//	//}
//
//	//����Ԫ�ص�����
//	int arr[5] = { 1,2,3,4,5 };
//	cout << "��������֮ǰ��" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	int start = 0;
//	int end = sizeof(arr) / sizeof(arr[0]) - 1;
//	while (start < end)
//	{
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//	cout << "��������֮��" << endl;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}

//int main() {
//
//	//ð������
//	int arr[] = { 4,2,8,0,5,7,1,3,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//������������
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//��ά����Ķ��巽ʽ
//	//1���������� ������[����][����]
//	//int arr[2][3];
//	//arr[0][0] = 1;
//	//arr[0][1] = 2;
//	//arr[0][2] = 3;
//	//arr[1][0] = 4;
//	//arr[1][1] = 5;
//	//arr[1][2] = 6;
//
//	///*cout << arr[0][0] << endl;
//	//cout << arr[0][1] << endl;
//	//cout << arr[0][2] << endl;
//	//cout << arr[1][0] << endl;
//	//cout << arr[1][2] << endl;
//	//cout << arr[1][2] << endl;*/
//
//	//for (int i = 0; i < 2; i++)
//	//{
//	//	for (int j = 0; j < 3; j++)
//	//	{
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	//2��
//	/*int arr2[2][3] = 
//	{ 
//		{1,2,3},
//		{4,5,6} 
//	};
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr2[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	//3
//	/*int arr3[2][3] = { 1,2,3,4,5,6 }; for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << arr3[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	//4
//	int arr4[][3] = { 1,2,3,4,5,6 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)bn 
//		{
//			cout << arr4[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//��ά�������Ƶ���;
//
//	//1�����Բ鿴ռ���ڴ�ռ��С
//	int arr[2][3] =
//	{
//		{1,2,3},
//		{4,5,6}
//	};
//	cout << "��ά����ռ�õ��ڴ��ǣ�" << sizeof(arr) << endl;
//	cout << "��ά�����һ��ռ���ڴ�Ϊ��" << sizeof(arr[0]) << endl;
//	cout << "��ά�����һ��Ԫ��ռ���ڴ�Ϊ��" << sizeof(arr[0][0]) << endl;
//
//	cout << "��ά���������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "��ά���������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//
//	//2�����Բ鿴��ά������׵�ַ
//	cout << "��ά�����׵�ַΪ��" << (int)arr << endl;
//	cout << "��ά�����һ���׵�ַΪ��" << (int)arr[0] << endl;
//	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;
//
//	cout << "��ά�����һ��Ԫ�صĵ�ַΪ��" << (int)&arr[0][0] << endl;
//	cout << "��ά����ڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[0][1] << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int score[3][3] =
//	{
//		{100,100,100},
//		{90,50,100},
//		{60,70,80}
//	};
//	int sum = 0;
//	string names[3] = { "����","����","����" };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			sum += score[i][j];
//		}
//		cout << names[i] << "���ܷ�Ϊ:" << sum << endl;
//		sum = 0;
//	}
//
//	system("pause");
//	return 0;
//}

//�����Ķ���
//�﷨
//����ֵ���� ������ �������б� {��������� return���ʽ}
//int Add(int x, int y)
//{
//	//���������ʱ��x��y��û����������ݣ���ֻ��һ����ʽ�ϵĲ���������β�
//	int z = x + y;
//	return z;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	//a��b��Ϊʵ�ʲ��������ʵ��
//	//�����ú�����ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
//	int ret = Add(a, b);
//	cout << ret << endl;
//
//	system("pause");
//	return 0;
//}

//���庯����ʵ���������ֽ��н���
//void swap(int num1, int num2)
//{
//	cout << "����ǰ��" << endl;
//	cout << "num = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//	cout << "������" << endl;
//	cout << "num = " << num1 << endl;
//	cout << "num2 = " << num2 << endl;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//	
//	cout << "a = " << endl;
//	cout << "b = " << endl;
//
//	//��������ֵ���ݵ�ʱ�򣬺������βη����ı�ģ�������Ӱ��ʵ��
//	swap(a, b);
//
//	cout << "a = " << endl;
//	cout << "b = " << endl;
//
//	system("pause");
//	return 0;
//}

//����������ʽ
//1���޲��޷�
//void test01()
//{
//	cout << "this is teat01" << endl;
//}
//
////2���в��޷�
//void test02(int a)
//{
//	cout << "this is test02 a = " << a << endl;
//}
//
////3���޲��з�
//int test03()
//{
//	cout << "this is test03" << endl;
//	return 100;
//}
//
////4���в��޷�
//int test04(int a)
//{
//	cout << "this is test04 a = " << a << endl;
//	return 1000;
//}
//
//int main() {
//
//	//�޲��޷������ĵ���
//	test01();
//
//	//�в��޷���������
//	test02(100);
//
//	//�޲��з���������
//	int num1 = test03();
//	cout << "num1 = " << num1 << endl;
//
//	//�в��޷������ĵ���
//	int num2 = test04(1);
//	cout << "num2 = " << num2 << endl;
//
//	system("pause");
//	return 0;
//}

//����������
//�ȽϺ�����ʵ�������������ֽ��бȽϣ�����һ���ϴ��ֵ

//��������
//��ǰ���߱������Ĵ��ڣ��������ú���������
//��������д��Σ����Ƕ���ֻ��дһ��
//int max(int a, int b);
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	cout << max(a, b) << endl;
//
//	system("pause");
//	return 0;
//}
//
////��������
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}


//�����ķ��ļ���д
//ʵ���������ֽ��н���

//1������һ��.h��׺��ͷ�ļ�
//2������һ��.cpp��׺��Դ�ļ�
//3����ͷ�ļ���д����������
//4����Դ�ļ����Ⱥ����Ķ���

int main() {

	int a = 10;
	int b = 20;

	swap(a, b);

	system("pause");
	return 0;
}