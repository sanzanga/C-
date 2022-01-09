#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//描述一个学生
//名字 
//年龄
//电话
//性别

//struct结构体关键字 Stu结构体标签
//struct Stu结构体类型
//定义一个结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1, s2, s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu//重新起个名字叫做Stu放在最后的分号之前
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1;//创建一个结构体变量 这里是局部变量
//	Stu s2 = { "张三",20,"1324324254","男" };//结构体的初始化
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
////结构的成员可以是标量 数组 指针 其他结构体
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
//	printf("%s\n", t.ch);//打印的就是hehe
//	printf("%s\n", t.s.arr);//打印的是hello world
//	return 0;
//}

typedef struct Stu//重新起个名字叫做Stu放在最后的分号之前
{
	//成员变量
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
	Stu s = { "李四",40,"13333333333","男" };
	//打印结构体函数
  //在结构体传参的时候首选地址传参 防止当结构体过大 参数压栈的系统开销过大
	print1(s);
	print2(&s);
	return 0;
}

