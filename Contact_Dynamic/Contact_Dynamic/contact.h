#pragma once

//#define MAX 1000
#define DEFULT_SZ 3

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum Option
{
	EXIT,//0
	ADD,//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};


//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data;//���100����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ��
	int capacity;//��ǰͨѶ¼���������
};

//��������
//��ʼ��ͨ��¼�ĺ���
void IntiContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼����Ϣ
void ShowContact(const struct Contact* ps);
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);

//����ָ���˵���Ϣ
void SearchContact(struct Contact* ps);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);

//����ͨѶ¼
void SortContact(struct Contact* ps);

//����ͨѶ¼
void DestoryContact(struct Contact* ps);