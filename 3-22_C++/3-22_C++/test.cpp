#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//������ ���ļ�
class Person
{
public:
	char m_Name[64];
	int m_Age;
};

void test01()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ� �ж��ʼ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4�����ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;

	//5���ر��ļ�
	ifs.close();
}

int main() {

	test01();

	system("pause");
	return 0;
}

////�������ļ� д�ļ�
//class Person
//{
//public:
//	char m_Name[64];//����
//	int m_Age;//����
//};
//
//void test01()
//{
//	//1������ͷ�ļ�
//	//#include <fstream>
//
//	//2������������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3�����ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4��д�ļ�
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5���ر��ļ�
//	ofs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////�ı��ļ� ���ļ�
//void test01()
//{
//	//1������ͷ�ļ�
//	//#include <fstream>
//
//	//2������������
//	ifstream ifs;
//
//	//3�����ļ�  �����ж��Ƿ�򿪳ɹ�
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4��������
//	//��һ��
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	//5���ر��ļ�
//	ifs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////�ı��ļ�����д�ļ�
//void test01()
//{
//	//1������ͷ�ļ�
//	//#include <fsteam>
//	
//	//2������������
//	ofstream ofs;
//
//	//3��ָ���򿪷�ʽ
//	ofs.open("text.txt", ios::out);
//
//	//4��д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//
//	//5���ر��ļ�
//	ofs.close();
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//class rectangle
//{
//private:
//	int length, width;
//public:
//	rectangle(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	void set(int x, int y)
//	{
//		length = x;
//		width = y;
//	}
//	int getlength()
//	{
//		return length;
//	}
//	int getwidth() 
//	{
//		return width;
//	}
//	// write your code here...
//	virtual int getval()
//	{
//		return width * length;
//	}
//};
//class cuboid :public rectangle
//{
//private:
//	int height;
//public:
//	cuboid(int x, int y, int z) :rectangle(x, y)
//	{
//		height = z;
//	}
//	// write your code here...
//	int getval()
//	{
//		return getwidth() * getlength() * height;
//	}
//};
//int main() {
//	int x, y, z;
//	cin >> x >> y >> z;
//	cuboid a(x, y, z);
//	rectangle b(x, y);
//
//	rectangle* p = &b;
//	cout << p->getval() << '\n';
//
//	p = &a;
//	cout << p->getval();
//	return 0;
//}

//class BaseCalculator
//{
//public:
//    int m_A;
//    int m_B;
//    // write your code here......
//    virtual int getResult() = 0;
//};
//
//// �ӷ���������
//class AddCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A + m_B;
//    }
//};
//
//// ������������
//class SubCalculator : public BaseCalculator
//{
//    // write your code here......
//    int getResult()
//    {
//        return m_A - m_B;
//    }
//};
//
//
//int main() {
//
//    BaseCalculator* cal = new AddCalculator;
//    cal->m_A = 10;
//    cal->m_B = 20;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    cal = new SubCalculator;
//    cal->m_A = 20;
//    cal->m_B = 10;
//    cout << cal->getResult() << endl;
//    delete cal;
//
//    return 0;
//}