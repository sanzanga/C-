#include <iostream>
using namespace std;
#include <string>

//string�Ӵ�
//���ַ����л�ȡ��Ҫ���Ӵ�
//string substr(int pos = 0,int n = npos) const;//����pos��ʼ��n���ַ���ɵ��ַ���

void test01()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);
	cout << "subStr=" << subStr << endl;
}

//ʵ�ò���
void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���ַ�л�ȡ�û�����Ϣ
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




////string�����ɾ��
////��string�ַ������в����ɾ���ַ�����
////�����ɾ������ʼ�±궼�Ǵ�0��ʼ
///*
//* string& insert(int pos,const char* s);//�����ַ�
//* string& insert(int pos,const string& str);//�����ַ���
//* string& insert(int pos,int n,char c);//��ָ��λ�ò���n���ַ�c
//* string& erase(int pos,int n= npos);//ɾ����pos��ʼ��n���ַ�
//*/
//
//void test01()
//{
//	string str = "hello";
//	//����
//	str.insert(1, "111");
//	//h111ello
//	cout << "str=" << str << endl;
//
//	//ɾ��
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




////string�ַ���ȡ
////string�е����ַ���ȡ��ʽ������
////char& operator[](int n);//ͨ��[]��ʽȡ�ַ� str[1];
////char& at(int n);//ͨ��at������ȡ�ַ� str.at(1);
//
//void test01()
//{
//	string str = "hello";
//	//cout << "str=" << str << endl;
//	//1��ͨ��[]���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2��ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//�޸ĵ����ַ�
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




////string�ַ����Ƚ�
////�ַ����Ƚ��ǰ��ַ���ASCII��ֵ���жԱ�
////=���� 0
////>���� 1
////<���� -1
//
////����ԭ��
////int compare(const string &s) const;//���ַ���s�Ƚ�
////int compare(const char* s)const;//���ַ���s�Ƚ�
//
////�ַ����Ա���Ҫ�����ڱȽ������ַ����Ƿ���ȣ��ж�˭��˭С�����岢���Ǻܴ�
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




////string���Һ��滻
////���ң�����ָ���ַ����Ƿ����
////�滻����ָ����λ���滻�ַ���
///*
//* rfind����������� find�Ӵ������Ҳ���
//* find�ҵ����ַ������س��ҵĵ�һ���ַ�λ�ã��Ҳ�������-1
//* replace���滻ʱ��Ҫ�ƶ����ĸ�λ���𣬶��ٸ��ַ����滻��ʲô���ַ�
//* int find(const string& str,int pos=0) const;����str��һ�γ���λ�ã���pos��ʼ����
//* int find(const char* s,int pos=0) const;����s��һ�γ���λ�ã���pos��ʼ����
//* int find(const char* s,int pos,int n) const;��posλ�ò���s��ǰn���ַ���һ��λ��
//* int find(const char c,int pos=0) const;�����ַ�c��һ�γ��ֵ�λ��
//* int rfind(const string& str,int pos = npos) const;//����str���һ�γ���λ�ã���pos��ʼ����
//* int rfind(const char* s,int pos = npos) const;//����s���һ�γ���λ�ã���pos��ʼ����
//* int rfind(const char* s,int pos,int n) const;//��pos����s��ǰn���ַ����һ��λ��
//* int rfind(const char c,int pos=0) const;//�����ַ�c���һ�γ���λ��
//* string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
//* string& replace(int pos,int n,const char* s);//�滻��pos��ʼ��ǰn���ַ�Ϊ�ַ���s
//*/
//
////1���滻
//void test01()
//{
//	string str1 = "abcdefgde";
//	//int pos = str1.find("de");
//	//cout << "pos=" << pos << endl;//���ھͷ��ز����ַ�����λ��
//	int pos = str1.find("df");
//	if (pos == 1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "pos=" << pos << endl;//�����ھͷ���-1
//	}
//
//	//rfind �� find����
//	//rfind����������� find�Ӵ������Ҳ���
//	pos = str1.rfind("de");
//	cout << "pos=" << pos << endl;
//}
//
////2���滻
//void test02()
//{
//	string str1 = "abcdefg";
//	//��1��λ����3���ַ��滻��"111"
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