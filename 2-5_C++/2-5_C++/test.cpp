#include <iostream>
using namespace std;
#include <string>

struct Stu 
{
	string name;
	int age;
	int score;
};

//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ�������
void print(const struct Stu* s)
{
	//s->age = 10;//����const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ���ǵ������
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}

int main() {

	//const�ڽṹ����е�ʹ��

	//����һ���ṹ��ı���
	struct Stu s = { "����",20,100 };

	//ͨ��������ӡ�ṹ��ı�����Ϣ
	print(&s);

	system("pause");
	return 0;
}

//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
////ֵ����
//void print1(struct Stu s)
//{
//	cout << "�Ӻ����д�ӡ ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
//}
//
////��ַ����
//void print2(struct Stu* s)
//{
//	cout << "main�����д�ӡ ������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
//}
//
//int main() {
//
//	//�ṹ������������
//	//��ѧ������һ�������У���ӡѧ�����ϵ�������Ϣ
//
//	//�����ṹ�����
//	struct Stu s;
//	s.name = "����";
//	s.age = 20;
//	s.score = 100;
//
//	cout << "main�����д�ӡ ������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;
//
//	print1(s);
//
//	//print2(&s);
//
//	system("pause");
//	return 0;
//}

//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
//struct Tea
//{
//	int id;
//	string name;
//	int age;
//	struct Stu stu;
//};
//
//int main() {
//
//	//Ƕ�׽ṹ���ʹ��
//	//������ʦ
//	struct Tea t;
//	t.id = 10000;
//	t.name = "����";
//	t.age = 20;
//	t.stu.name = "С��";
//	t.stu.age = 20;
//	t.stu.score = 100;
//
//	system("pause");
//	return 0;
//}

////�ṹ��ָ��
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
//int main() {
//
//	//����ѧ���ṹ�����
//	struct Stu s = { "����",20,100 };
//
//	//ͨ��ָ��ָ��ṹ�����
//	struct Stu * p = &s;
//
//	//ͨ��ָ����ʽṹ������е�����
//	//ͨ���ṹ��ָ�������ʽṹ���еĳ�Ա�ùؼ���->
//	cout << "������" << p->name << " ���䣺" << p->name << " ������" << p->score << endl;
//
//	system("pause");
//	return 0;
//}

////�ṹ������
////1������һ���ṹ������
//struct Stu
//{
//	string name;
//	int age;
//	int score;
//};
//
//
//int main() {
//
//	//2������һ���ṹ������
//	struct Stu stuArray[3] =
//	{
//		{"����",20,100},
//		{"����",19,80},
//		{"����",18,60}
//	};
//
//	//3�����ṹ�������е�Ԫ�ؽ��и�ֵ
//	stuArray[2].name = "����";
//	stuArray[2].age = 20;
//	stuArray[2].score = 100;
//
//	//4�������ṹ������
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "������" << stuArray[i].name 
//			 << " ���䣺" << stuArray[i].age 
//			 << " ������" << stuArray[i].score 
//			 << endl;
//	}
//
//	system("pause");
//	return 0;
//}

////1������ѧ���������ͣ�ѧ�����������������䡢������
////�Զ����������ͣ�һЩ���ͼ�����ɵ�һ������
////�﷨��struct �ṹ���� {�ṹ���Ա�б�};
//struct Student
//{
//	//��Ա�б�
//	string name;
//	int age;
//	int score;
//}s3;//˳�㴴��һ���ṹ��ı���
//
//
//int main() {
//
//	//2��ͨ��ѧ�����ʹ�������ѧ������
//
//    //2.1��struct Student s1
//	//struct�ؼ��ֿ���ʡ��
//	struct Student s1;
//	//��s1���Ը�ֵ��ͨ��.�����ʽṹ������е�����
//	s1.name = "����";
//	s1.age = 20;
//	s1.score = 100;
//
//	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;
//
//    //2.2��struct Student s2={...}��
//	struct Student s2 = { "����",30,60 };
//	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;
//
//    //2.3������ṹ���ʱ��˳�㴴������
//	s3.name = "����";
//	s3.age = 25;
//	s3.score = 80;
//
//    cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;
//
//	system("pause");
//	return 0;
//}

//void maopao(int arr[], int len)//int arr[]����д��int* arr;
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void print(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//
//int main() {
//
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	maopao(arr, len);
//
//	/*for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}*/
//
//	//��ӡ����
//	print(arr, len);
//
//	system("pause");
//	return 0;
//}

////ʵ�������������н����ĺ���
//void swap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "swap01a=" << a << endl;
//	cout << "swap01b=" << b << endl;
//}
//
//void swap02(int* p1, int* p2)
//{
//	int temp = *p1;
//	*p1 = *p2;
//	*p2 = temp;
//}
//
//int main() {
//
//	//ָ��ͺ���
//	//1��ֵ����
//	int a = 10;
//	int b = 20;
//	swap01(a, b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	//2����ַ����
//	//����ǵ�ַ���ݣ���������ʵ��
//	swap02(&a, &b);
//
//	cout << "a=" << a << endl;
//	cout << "b=" << b << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//ָ�������
//	//����ָ�������������е�Ԫ��
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
//
//	int* p = arr;//arr����������׵�ַ
//
//	cout << "����ָ����ʵĵ�һ��Ԫ�أ�" << *p << endl;
//
//	p++;//��ָ�����ƫ����4���ֽ�
//
//	cout << "����ָ����ʵĵڶ���Ԫ�أ�" << *p << endl;
//
//	int* p2 = arr;
//	for (int i = 0; i < 10; i++) {
//		//cout << arr[i] << endl;
//		cout << *p2 << endl;
//		p2++;
//	}
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//1��const����ָ�� ����ָ��
//	int a = 10;
//	int b = 10;
//
//	const int* p = &a;
//	//ָ��ָ���ֵ�����Խ����޸ģ�ָ���ָ����Խ����޸�
//	//*p = 20;//err
//	p = &b;//��ȷ
//
//	//2��const���γ��� ָ�볣��
//	int* const p2 = &a;
//	//ָ��ָ���ֵ���Խ����޸ģ�ָ���ָ�򲻿��Խ����޸�
//	*p2 = 100;//��ȷ
//	//*p2 = &b;//err
//
//	//3��const����ָ��ͳ���
//	const int* const p3 = &a;
//	//ָ���ָ���ָ���ֵ�������Խ����޸�
//	//*p3 = 100;//err
//	//*p3 = &b;//err
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//Ұָ��
//	int* p = (int*)0x1100;
//	//�����ǵĳ����У������������Ұָ��
//
//	//����Ұָ�뱦��
//	cout << *p << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//��ָ��
//	//1����ָ��������ָ��������г�ʼ��
//	int* p = NULL;
//
//
//	//2����ָ���ǲ����Խ��з��ʵ�
//	//0~255֮����ڴ�����ϵͳռ�õģ���˲����Խ��з���
//	*p = 100;//û���﷨���󣬵��ǳ�������
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//ָ����ռ���ڴ�ռ��С
//	int a = 10;
//	int* p = &a;
//	//��32λ����ϵͳ�£�ָ��ռ��4���ֽڣ�������ʲô����
//	//��64λ����ϵͳ�£�ָ��ռ��8��������ʲô����
//	cout << "sizeof(int*)=" << sizeof(p) << endl;
//	cout << "sizeof(int*)=" << sizeof(int *) << endl;
//	cout << "sizeof(int*)=" << sizeof(float*) << endl;
//	cout << "sizeof(int*)=" << sizeof(double*) << endl;
//	cout << "sizeof(int*)=" << sizeof(char*) << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	//1������һ��ָ��
//	int a = 10;
//	//ָ�붨����﷨���������� * ָ���������
//	int* p;
//	//��ָ���¼������a�ĵ�ַ
//	p = &a;
//	cout << "a�ĵ�ַΪ��" << &a << endl;
//	cout << "ָ��pΪ:" << p << endl;
//
//	//2��ʹ��ָ��
//	//����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
//	//ָ��ǰ�����һ��*�����ҵ�ָ��ָ����ڴ��е�����
//	*p = 100;
//	cout << "a=" << a << endl;
//	cout << "*p=" << *p << endl;
//
//	system("pause");
//	return 0;
//}