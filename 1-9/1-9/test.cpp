#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ��ѧ��
//���� 
//����
//�绰
//�Ա�

//struct�ṹ��ؼ��� Stu�ṹ���ǩ
//struct Stu�ṹ������
//����һ���ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3������ȫ�ֵĽṹ�����

//typedef struct Stu//����������ֽ���Stu�������ķֺ�֮ǰ
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1;//����һ���ṹ����� �����Ǿֲ�����
//	Stu s2 = { "����",20,"1324324254","��" };//�ṹ��ĳ�ʼ��
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
////�ṹ�ĳ�Ա�����Ǳ��� ���� ָ�� �����ṹ��
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello world";
//	struct T t = { "hehe",{100,'w',"hello world",4.14},arr };
//	printf("%s\n", t.ch);//��ӡ�ľ���hehe
//	printf("%s\n", t.s.arr);//��ӡ����hello world
//	return 0;
//}

typedef struct Stu//����������ֽ���Stu�������ķֺ�֮ǰ
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age: %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex: %s\n", tmp.sex);
}

void print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %d\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}

int main()
{
	Stu s = { "����",40,"13333333333","��" };
	//��ӡ�ṹ�庯��
  //�ڽṹ�崫�ε�ʱ����ѡ��ַ���� ��ֹ���ṹ����� ����ѹջ��ϵͳ��������
	print1(s);
	print2(&s);
	return 0;
}

