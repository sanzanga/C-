#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//������
class Animal
{
public:
	int m_Age;
};

//������̳н�����μ̳е�����
// �̳�֮ǰ���Ϲؼ���virtual��Ϊ��̳�
// Animal��Ϊ�����
//����
class Sheep:virtual public Animal{};

//����
class Tuo:virtual public Animal{};

//������
class SheepTuo:public Sheep,public Tuo{};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//�����μ̳У���������ӵ����ͬ�����ݣ���Ҫ��������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	//�����������֪����ֻҪ��һ�־Ϳ��ԣ����μ̳е������������ݣ���Դ�˷�
}

int main() {

	test01();

	system("pause");
	return 0;
}

////��̳��﷨
//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
////���� ��Ҫ�̳�Base1��Base2
////�﷨�� class ���� : �̳з�ʽ ����1, �̳з�ʽ ����2 ...
//class Son :public Base1, public Base2
//{
//public:
//	Son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	Son s;
//	cout << "size of Son = " << sizeof(s) << endl;
//	//�������г���ͬ����Ա����Ҫ������������
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a = 2, b = -1, c = 2;
//	if (a < b)
//		if (b < 0) c = 0;
//		else c = c + 1;
//	cout << c << endl;
//
//	system("pause");
//	return 0;
//}

////�̳��е�ͬ����̬��Ա����ʽ
//class Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Base---static void func()" << endl;
//	}
//	static void func(int a)
//	{
//		cout << "Base---static void func(int a)" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void func()
//	{
//		cout << "Son---static void func()" << endl;
//	}
//};
//
//int Son::m_A = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1��ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//	//2��ͨ������������
//	cout << "ͨ������������" << endl;
//	cout << "Son �� m_A  = " << Son::m_A << endl;
//	//��һ��::����ͨ�������ķ�ʽ���� �ڶ���::������ʸ�����������
//	cout << "Base �� m_B = " << Son::Base::m_A << endl;
//}
//
////ͬ���ľ�̬��Ա����
//void test02()
//{
//	//1��ͨ������������
//	cout << "ͨ������������" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//	//2��ͨ������������
//	cout << "ͨ������������" << endl;
//	Son::func();
//	Son::Base::func();
//
//	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
//	//�������ʸ����б����ص�ͬ����Ա����Ҫ��������
//	Son::Base::func(100);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}

////�̳���ͬ����Ա����ʽ
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base---func()����" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Base---func(int a)����" << endl;
//	}
//
//	int m_A = 100;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son---func��������" << endl;
//	}
//
//	int m_A;
//};
//
////ͬ����Ա���ԵĴ���ʽ
//void test01()
//{
//	Son s;
//	cout << "Son��m_A = " << s.m_A << endl;
//	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
//	cout << "Base��m_A = " << s.Base::m_A << endl;
//}
//
////ͬ����Ա��������ʽ
//void test02()
//{
//	Son s;
//	s.func();//ֱ�ӵ��� ���õ������е�ͬ����Ա
//	s.Base::func();
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ����������
//	s.Base::func(100);
//}
//
//int main() {
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}

////�̳��й��������������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯��" << endl;
//	}
//	~Base()
//	{
//		cout << "Base��������" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son���캯��" << endl;
//	}
//	~Son()
//	{
//		cout << "Son��������" << endl;
//	}
//};
//
//void test01()
//{
//	//�̳��еĹ����������˳�����£�
//	// �ȹ��츸�࣬�ڹ�������
//	// ������˳��͹����෴
//	//Base b;
//	Son s;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////�̳��еĶ���ģ��
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//void test01()
//{
//	//16
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա�����Ǳ������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

////�̳з�ʽ
////�����̳�
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա ��������Ȼ�����ǹ���Ȩ��
//		m_A = 10;//�����еı���Ȩ�޳�Ա ��������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա ������ʲ���
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//����Son1��m_B�Ǳ���Ȩ�ޣ������Ƿ��ʲ�����
//}
//
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;//�����еĹ�����Ա�����������˱���Ȩ��
//		m_B = 100;//�����еı�����Ա�����������ౣ��Ȩ��
//		//m_C = 100;//�����е�˽�г�Ա��������ʲ���
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 1000;//��Son2��m_A����˱���Ȩ�ޣ�����������Ƿ��ʲ�����
//	//s2.m_B = 1000;//��Son2��m_B�����Ǳ���Ȩ�ޣ�����������Ƿ��ʲ�����
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//�����еĹ�����Ա��������������˽�г�Ա
//		m_B = 100;//�����еı�����Ա��������������˽�г�Ա
//		//m_C = 100;//�����е�˽�г�Ա��������ʲ���
//	}
//};
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//����Son3��m_A�ͱ����˽�г�Ա����ʹ���ڵ���̳�Son3��Ҳ�Ƿ��ʲ�����
//		//m_B = 1000;//����Son3��m_A�ͱ����˽�г�Ա����ʹ���ڵ���̳�Son3��Ҳ�Ƿ��ʲ�����
//	}
//};
//
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000;//����Son3�ͱ����˽�г�Ա��������ʲ���
//	//s1.m_B = 1000;//����Son3�ͱ����˽�г�Ա��������ʲ���
//}
//
//int main() {
//
//	test01();
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	cout << "�������¶�ֵ�͵�λ:";
//	int a;
//	char ch;
//	cin >> a >> ch;
//	if (ch == 'F')
//	{
//		if (a > 500 || a < -500)
//			cout << "������������!" << endl;
//		else
//		{
//			cout << a << ch << "=" << (5.0 / 9 * (a - 32)) << "C" << endl;
//		}
//	}
//	else if (ch == 'C')
//	{
//		if (a > 200 || a < -200)
//			cout << "������������!" << endl;
//		else
//			cout << a << ch << "=" << (a * 9.0 / 5 + 32) << "F" << endl;
//	}
//	else
//		cout << "�������!" << endl;
//
//	system("pause");
//	return 0;
//}

//int main() {
//
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a == 0)
//		cout << "�÷��̲���һԪ���η���" << endl;
//	else
//	{
//		double p = (double)b * b - 4.0 * a * c;
//		if (p > 0)
//			cout <<((-b + sqrt(p)) / (2.0 * a)) << " " << ((-b - sqrt(p)) / (2.0 * a)) << endl;
//		else if (p == 0)
//			cout << (-b / (2.0 * a)) << endl;
//		else
//			cout << ((-b + sqrt(-b)) / (2.0 * a)) << "i " << ((-b - sqrt(-b)) / (2.0 * a)) << "i" << endl;
//	}
//
//	system("pause");
//	return 0;
//}