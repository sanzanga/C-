#include <iostream>
using namespace std;
#include <string>

//string子串
//从字符串中获取想要的子串
//string substr(int pos = 0,int n = npos) const;//返回pos开始的n个字符组成的字符串

void test01()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}

//实用操作
void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件地址中获取用户名信息
	int pos = email.find("@");
	cout << pos << endl;
	string userName = email.substr(0, pos);
	cout << userName << endl;
}

int main() {

	//test01();

	test02();

	system("pause");
	return 0;
}




////string插入和删除
////对string字符串进行插入和删除字符操作
////插入和删除的起始下标都是从0开始
///*
//* string& insert(int pos,const char* s);//插入字符
//* string& insert(int pos,const string& str);//插入字符串
//* string& insert(int pos,int n,char c);//在指定位置插入n个字符c
//* string& erase(int pos,int n= npos);//删除从pos开始的n个字符
//*/
//
//void test01()
//{
//	string str = "hello";
//	//插入
//	str.insert(1, "111");
//	//h111ello
//	cout << "str=" << str << endl;
//
//	//删除
//	str.erase(1, 3);
//	cout << "str=" << str << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////string字符存取
////string中单个字符存取方式有两种
////char& operator[](int n);//通过[]方式取字符 str[1];
////char& at(int n);//通过at方法获取字符 str.at(1);
//
//void test01()
//{
//	string str = "hello";
//	//cout << "str=" << str << endl;
//	//1、通过[]访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2、通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//修改单个字符
//	str[0] = 'x';
//	cout << "str=" << str << endl;
//
//	str.at(1) = 'x';
//	cout << "str=" << str << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////string字符串比较
////字符串比较是按字符的ASCII码值进行对比
////=返回 0
////>返回 1
////<返回 -1
//
////函数原型
////int compare(const string &s) const;//与字符串s比较
////int compare(const char* s)const;//与字符串s比较
//
////字符串对比主要是用于比较两个字符串是否相等，判断谁大谁小的意义并不是很大
//
//void test01()
//{
//	string str1 = "hello";
//	string str2 = "hello";
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1==str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1>str2" << endl;
//	}
//	else
//	{
//		cout << "str1<str2" << endl;
//	}
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}




////string查找和替换
////查找：查找指定字符串是否存在
////替换：在指定的位置替换字符串
///*
//* rfind从右往左查找 find从从左往右查找
//* find找到了字符串返回超找的第一个字符位置，找不到返回-1
//* replace在替换时，要制定从哪个位置起，多少个字符，替换成什么样字符
//* int find(const string& str,int pos=0) const;查找str第一次初夏位置，从pos开始查找
//* int find(const char* s,int pos=0) const;查找s第一次出现位置，从pos开始查找
//* int find(const char* s,int pos,int n) const;从pos位置查找s的前n个字符第一次位置
//* int find(const char c,int pos=0) const;查找字符c第一次出现的位置
//* int rfind(const string& str,int pos = npos) const;//查找str最后一次出现位置，从pos开始查找
//* int rfind(const char* s,int pos = npos) const;//查找s最后一次出现位置，从pos开始查找
//* int rfind(const char* s,int pos,int n) const;//从pos查找s的前n个字符最后一次位置
//* int rfind(const char c,int pos=0) const;//查找字符c最后一次出现位置
//* string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
//* string& replace(int pos,int n,const char* s);//替换从pos开始的前n个字符为字符串s
//*/
//
////1、替换
//void test01()
//{
//	string str1 = "abcdefgde";
//	//int pos = str1.find("de");
//	//cout << "pos=" << pos << endl;//存在就返回查找字符串的位置
//	int pos = str1.find("df");
//	if (pos == 1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "pos=" << pos << endl;//不存在就返回-1
//	}
//
//	//rfind 和 find区别
//	//rfind从右往左查找 find从从左往右查找
//	pos = str1.rfind("de");
//	cout << "pos=" << pos << endl;
//}
//
////2、替换
//void test02()
//{
//	string str1 = "abcdefg";
//	//从1号位置起3个字符替换成"111"
//	str1.replace(1, 3, "1111");
//	cout << "str1=" << str1 << endl;
//}
//
//int main() {
//
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}