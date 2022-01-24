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


//通讯录类型
struct Contact
{
	struct PeoInfo *data;//存放100个信息
	int size;//记录当前已经有的元素
	int capacity;//当前通讯录的最大容量
};

//声明函数
//初始化通信录的函数
void IntiContact(struct Contact* ps);
//增加一个信息到通讯录
void AddContact(struct Contact* ps);
//打印通讯录的信息
void ShowContact(const struct Contact* ps);
//删除指定的联系人
void DelContact(struct Contact* ps);

//查找指定人的信息
void SearchContact(struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);

//排序通讯录
void SortContact(struct Contact* ps);

//销魂通讯录
void DestoryContact(struct Contact* ps);